#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <cmath>
#include <cstdint>

// pitch : x roll : y yaw : z

class MPU6050Node : public rclcpp::Node {
public:
    MPU6050Node() : Node("mpu6050_node") {
        publisher_ = this->create_publisher<sensor_msgs::msg::Imu>("/imu/data_raw", 10);
        
        // 1. 打開樹莓派的 I2C Bus 1
        file_ = open("/dev/i2c-1", O_RDWR); //Open for ReaD and WRite 
        if (file_ < 0 || ioctl(file_, I2C_SLAVE, 0x68) < 0) {  //ioctl (Input/Output Control) 用來設定 I2C 裝置地址 I2C_SLAVE 是一個常數，代表要設定的裝置是 I2C 的從設備 (Slave)，0x68 是 MPU6050 的 I2C 地址
            RCLCPP_ERROR(this->get_logger(), "MPU6050 連線失敗！檢查 i2cdetect");
            return;
        }

        // 2. 喚醒 MPU6050 (寫入 0x00 到電源管理暫存器 0x6B)  0x00 是要寫入的數值，表示喚醒裝置，因為 MPU6050 預設是睡眠模式，所以需要寫入 0x00 來喚醒它
        uint8_t wake_buf[2] = {0x6B, 0x00};
        if (write(file_, wake_buf, 2) != 2) { // 
            RCLCPP_ERROR(this->get_logger(), "無法喚醒 MPU6050！");
        } else {
            RCLCPP_INFO(this->get_logger(), "MPU6050 喚醒成功，開始發佈 IMU 數據！");
        }

        // 2-1. 強制設定加速度計為 +-2g (寫入 0x00 到 0x1C 暫存器)
        // 這樣除以 16384 算出來的地心引力才會是正確的 9.8
        uint8_t accel_cfg_buf[2] = {0x1C, 0x00};
        if (write(file_, accel_cfg_buf, 2) != 2) {
            RCLCPP_WARN(this->get_logger(), "無法設定加速度計範圍");
        }
        // 2-2. 開啟數位低通濾波器 DLPF (寫入 0x04 到 0x1A 暫存器)
        // 0x04 代表將頻寬限制在 21Hz，這能完美消除風扇與馬達的高頻震動雜訊！
        uint8_t dlpf_cfg_buf[2] = {0x1A, 0x04};
        if (write(file_, dlpf_cfg_buf, 2) != 2) {
            RCLCPP_WARN(this->get_logger(), "無法設定低通濾波器");
        }
        
        // 3. 設定 100Hz (10ms) 的定時器，瘋狂讀取數據
        timer_ = this->create_wall_timer( // create_wall_timer 是 ROS 2 中用來創建定時器的方法，第一個參數是定時器的週期，一定要使用std::chrono，第二個參數是一個回調函數，當定時器觸發時會呼叫這個函數，這裡使用 std::bind 將 MPU6050Node 的 publish_imu_data 方法綁定為回調函數
            std::chrono::milliseconds(10),
            std::bind(&MPU6050Node::publish_imu_data, this));
    }

private:
    int file_; // I2C 文件描述符  後面加_是為了區分成員變數和局部變數
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    int calibration_count_ = 0;
    const int calibration_samples_ = 500;

    int32_t gyro_x_sum_ = 0;
    int32_t gyro_y_sum_ = 0;
    int32_t gyro_z_sum_ = 0;

    int16_t gyro_x_offset_ = 0;
    int16_t gyro_y_offset_ = 0;
    int16_t gyro_z_offset_ = 0;

    void publish_imu_data() {
        // 告訴 MPU6050 我們要從暫存器 0x3B (ACCEL_XOUT_H) 開始讀取
        uint8_t reg = 0x3B;
        if (write(file_, &reg, 1) != 1) {
            RCLCPP_WARN(this->get_logger(), "I2C 寫入暫存器失敗");
            return;
        }

        // 連續讀取 14 個 bytes (Accel X,Y,Z + Temp + Gyro X,Y,Z 各佔 2 bytes)
        uint8_t data[14];
        if (read(file_, data, 14) != 14) {
            RCLCPP_WARN(this->get_logger(), "I2C 讀取數據失敗");
            return;
        }

        // 把高 8 位元 (High byte) 和低 8 位元 (Low byte) 拼成 16-bit 有號整數
        int16_t accel_x = (data[0] << 8) | data[1]; // data[0] 是高位元，data[1] 是低位元，先把高位元左移 8 位，再用位元 OR 把低位元加上去，就得到了完整的 16-bit 數值 | 是位元 OR 運算符，這裡用來把兩個 8-bit 的數值合併成一個 16-bit 的數值
                                                    //  兩個數字「上下對齊」，然後每一格獨立做 OR 判斷（只要有一個是 1，那一格就是 1；兩個都是 0 才是 0）。
        int16_t accel_y = (data[2] << 8) | data[3]; /*(高八位 << 8)  : 10101010 00000000
                                                        (低八位)       : 00000000 11001100
                                                        ------------------------------------ 把它們每一格做位元或 (|)
                                                        (拼接後的結果) : 10101010 11001100*/
        int16_t accel_z = (data[4] << 8) | data[5];
        // data[6], data[7] 是溫度，這裡直接跳過
        int16_t gyro_x  = (data[8] << 8) | data[9];
        int16_t gyro_y  = (data[10] << 8) | data[11];
        int16_t gyro_z  = (data[12] << 8) | data[13];
        
        if(calibration_count_ < calibration_samples_) {
            gyro_x_sum_ += gyro_x;
            gyro_y_sum_ += gyro_y;
            gyro_z_sum_ += gyro_z;
            calibration_count_++;

            if(calibration_count_ == calibration_samples_) {
                gyro_x_offset_ = gyro_x_sum_ / calibration_samples_;
                gyro_y_offset_ = gyro_y_sum_ / calibration_samples_;
                gyro_z_offset_ = gyro_z_sum_ / calibration_samples_;
                RCLCPP_INFO(this->get_logger(), "陀螺儀校準完成！偏移值: X=%d, Y=%d, Z=%d", 
                            gyro_x_offset_, gyro_y_offset_, gyro_z_offset_);
            }
            return; 
        }

        gyro_x -= gyro_x_offset_;
        gyro_y -= gyro_y_offset_;
        gyro_z -= gyro_z_offset_;
        
        /*mpu6050原廠 +- 2g 加速度 內建16bit類比數位轉換器(ADC) -32768~32767*/
        // 進行物理單位轉換
        // 加速度計預設為 +-2g，1g = 16384 LSB。轉換為 m/s^2 需要乘上 9.80665
        float raw_accel_x_in_meters_per_sec_sq = (accel_x / 16384.0f) * 9.80665f;
        float raw_accel_y_in_meters_per_sec_sq = (accel_y / 16384.0f) * 9.80665f;
        float raw_accel_z_in_meters_per_sec_sq = (accel_z / 16384.0f) * 9.80665f;

        // 陀螺儀預設為 +-250 度/秒，1度/秒 = 131 LSB。轉換為 rad/s 需要乘上 (PI / 180)  $32768 / 250 = 131.072$ 約等於131 LSB/度/秒
        float raw_gyro_x_in_rad_per_sec = (gyro_x / 131.0f) * (M_PI / 180.0f);
        float raw_gyro_y_in_rad_per_sec = (gyro_y / 131.0f) * (M_PI / 180.0f);
           float raw_gyro_z_in_rad_per_sec = (gyro_z / 131.0f) * (M_PI / 180.0f);

        // 準備 ROS 2 訊息
        auto msg = sensor_msgs::msg::Imu();
        msg.header.stamp = this->get_clock()->now();
        msg.header.frame_id = "imu_link"; // TF 座標系名稱

        // 填入加速度 陀螺儀裝歪90度 所以 xy 相反傳入 
        msg.linear_acceleration.x = -raw_accel_y_in_meters_per_sec_sq;
        msg.linear_acceleration.y = raw_accel_x_in_meters_per_sec_sq;
        msg.linear_acceleration.z = raw_accel_z_in_meters_per_sec_sq;

        // 填入角速度 陀螺儀裝歪90度 所以xy 相反傳入 
        msg.angular_velocity.x = -raw_gyro_y_in_rad_per_sec;
        msg.angular_velocity.y = raw_gyro_x_in_rad_per_sec;
        msg.angular_velocity.z = raw_gyro_z_in_rad_per_sec;

        
        msg.orientation_covariance[0] = -1.0;

        // 發射！
        publisher_->publish(msg);
    }
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MPU6050Node>());
    rclcpp::shutdown();
    return 0;
}