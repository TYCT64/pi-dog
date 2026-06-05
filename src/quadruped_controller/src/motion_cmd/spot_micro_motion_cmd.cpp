// #include "spot_micro_motion_cmd.h"

#include <eigen3/Eigen/Geometry>
#include "std_msgs/msg/float32.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "tf2/LinearMath/Quaternion.hpp"
#include "tf2_eigen/tf2_eigen.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

#include "spot_micro_motion_cmd.h"
#include "spot_micro_kinematics/spot_micro_kinematics.h"
#include "i2c_pwm_board_msgs/msg/servo.hpp"
#include "i2c_pwm_board_msgs/msg/servo_array.hpp"
#include "spot_micro_idle.h"
#include "utils.h"


using namespace smk;
using namespace Eigen;
using namespace geometry_msgs;
typedef std::vector<std::pair<std::string,std::string>> VectorStringPairs;

// Constructor
SpotMicroMotionCmd::SpotMicroMotionCmd() : Node("spot_micro_motion_cmd_node") {

 
  // Initialize Command 
  cmd_ = Command();

  // Initialize state to Idle state
  state_ = std::make_unique<SpotMicroIdleState>();

  // Read in config parameters into smnc_
  readInConfigParameters();

  // Initialize spot micro kinematics object of this class
  sm_ = smk::SpotMicroKinematics(0.0f, 0.0f, 0.0f, smnc_.smc);

  // Set an initial body height and stance cmd for idle mode
  body_state_cmd_.euler_angs = {.phi = 0.0f, .theta = 0.0f, .psi = 0.0f};
  body_state_cmd_.xyz_pos = {.x = 0.0f, .y = smnc_.lie_down_height, .z = 0.0f};
  body_state_cmd_.leg_feet_pos = getLieDownStance();

  // Set the spot micro kinematics object to this initial command
  sm_.setBodyState(body_state_cmd_); //把剛才的預設姿勢塞給數學計算器

  // Set initial odometry state to zero
  robot_odometry_.euler_angs = {.phi = 0.0f, .theta = 0.0f, .psi = 0.0f};
  robot_odometry_.xyz_pos = {.x = 0.0f, .y = 0.0f, .z = 0.0f};

  // Initialize servo array message with 12 servo objects
  servo_array_.servos.clear();
  for (int i = 1; i <= smnc_.num_servos; i++) {
    i2c_pwm_board_msgs::msg::Servo temp_servo;
    temp_servo.servo = i;
    temp_servo.value = 0;
    servo_array_.servos.push_back(temp_servo);
  }

  // Initialize servo array absolute message with 12 servo object with a value of
  // zero, just copy servo_array_msg since it's already correct 
  servo_array_absolute_.servos = servo_array_.servos;

  // Initialize publishers and subscribers
  // stand cmd event subscriber 
  // <std_msgs::msg::Bool>為接收包裹的類型 "/stand_cmd"為廣播頻道 節點要往這送資料此sub才聽得到
  //  10為信箱容量可裝10個包裹滿了就丟舊的
  // std::bind 包裹到達時呼叫 standCommandCallback 這個函式屬於這個大腦物件 所以傳入 this
  // std::placeholders::_1 一個佔位符包裹進來時放這裡 一個Class裡面的function隱藏了物件自己(this) Ex:standCommandCallback(this , bool)
  // placeholders_1就是放bool 而bind裡面的this則傳入function中
  stand_sub_ = this->create_subscription<std_msgs::msg::Bool>(
    "/stand_cmd", 10, std::bind(&SpotMicroMotionCmd::standCommandCallback, this, std::placeholders::_1));
    
  // idle cmd event subscriber
  idle_sub_ = this->create_subscription<std_msgs::msg::Bool>(
    "/idle_cmd" , 10, std::bind(&SpotMicroMotionCmd::idleCommandCallback, this, std::placeholders::_1));

  // walk cmd event subscriber
  walk_sub_ = this->create_subscription<std_msgs::msg::Bool>(
    "/walk_cmd" , 10, std::bind(&SpotMicroMotionCmd::walkCommandCallback, this, std::placeholders::_1));

  // body angle command subscriber
  body_angle_cmd_sub_ = this->create_subscription<geometry_msgs::msg::Vector3>(
    "/angle_cmd" , 10, std::bind(&SpotMicroMotionCmd::angleCommandCallback, this, std::placeholders::_1));

  // velocity command subscriber 
  vel_cmd_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
    "/cmd_vel", 10, std::bind(&SpotMicroMotionCmd::velCommandCallback, this, std::placeholders::_1));

  // servos_absolute publisher
  // 發送<i2c_pwm_board_msgs::msg::ServoArray>這種包裹 "servos_absolute"廣播的頻道名 頻道容量10
  servos_absolute_pub_ = this->create_publisher<i2c_pwm_board_msgs::msg::ServoArray>("servos_absolute", 10); //"servos_absolute"

  // Servos proportional publisher
  servos_proportional_pub_ = this->create_publisher<i2c_pwm_board_msgs::msg::ServoArray>("servos_proportional",10);  //servos_proportional

  // Body state publisher for plotting
  body_state_pub_ = this->create_publisher<std_msgs::msg::Float32MultiArray>("body_state",10);

  // State string publisher for lcd monitor
  lcd_state_pub_ = this->create_publisher<std_msgs::msg::String>("lcd_state",10);

  // Velocity command state publisher for lcd monitor
  lcd_vel_cmd_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("lcd_vel_cmd",10);

  // Angle command state publisher for lcd monitor
  // lcd_angle_cmd_pub_ = this->create_publisher<geometry_msgs::msg::Vector3>("lcd_angle_cmd",10);


  transform_br_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);
  static_transform_br_ = std::make_unique<tf2_ros::StaticTransformBroadcaster>(*this);
  // Initialize lcd monitor messages
  lcd_state_string_msg_.data = "Idle";

  lcd_vel_cmd_msg_.linear.x = 0.0f;
  lcd_vel_cmd_msg_.linear.y = 0.0f;
  lcd_vel_cmd_msg_.linear.z = 0.0f;
  lcd_vel_cmd_msg_.angular.x = 0.0f;
  lcd_vel_cmd_msg_.angular.y = 0.0f;
  lcd_vel_cmd_msg_.angular.z = 0.0f;
  
  lcd_angle_cmd_msg_.x = 0.0f;
  lcd_angle_cmd_msg_.y = 0.0f;
  lcd_angle_cmd_msg_.z = 0.0f;
 

  // Only do if plot mode
  // Initialize body state message for plot debug only
  // Initialize 18 values to hold xyz positions of the four legs (12) + 
  // the body x,y,z positions (3), and the body angles (3) for a total of 18
  if (smnc_.plot_mode) {
    for (int i = 0; i < 18; i++) {
      body_state_msg_.data.push_back(0.0f); 
    }
  }

  // Publish static transforms
  publishStaticTransforms();
}


// Destructor method
SpotMicroMotionCmd::~SpotMicroMotionCmd() {

  if (smnc_.debug_mode) {
    std::cout<<"from Destructor \n";
  }
  // Free up the memory assigned from heap
  // 已經用Smart Pointer 不用手動delete 
}


void SpotMicroMotionCmd::runOnce() {
  if (smnc_.debug_mode) {
    std::cout<<"from Runonce \n";
  }
  RCLCPP_INFO(this->get_logger(), "🧠 目前大腦內的 Stand 狀態: %d", cmd_.stand_cmd_);
  // Call method to handle input commands
  /*呼叫狀態機讀取搖桿指令計算馬達角度，發送PWM訊號*/
  handleInputCommands();

  // Consume all event commands.
  // This resets all event commands if they were true. Doing this enforces a rising edge detection
  resetEventCommands();

  // Only publish body state message in debug mode
  if (smnc_.plot_mode) {
    publishBodyState();
  }

  // Publish lcd monitor data
  publishLcdMonitorData();

  // Broadcast dynamic transforms
  publishDynamicTransforms();//呼叫transform_br_

  if (smnc_.publish_odom) {
    // Integrate robot odometry
    integrateOdometry();
  }
}


bool SpotMicroMotionCmd::publishServoConfiguration() {  
  // Create a temporary servo config
  // i2c_pwm_board::ServoConfig temp_servo_config;
  // i2cpwm_board::ServosConfig temp_servo_config_array;

  // // Loop through servo configuration dictionary in smnc_, append servo to
  // for (std::map<std::string, std::map<std::string, float>>::iterator
  //      iter = smnc_.servo_config.begin();
  //      iter != smnc_.servo_config.end();
  //      ++iter) {

  //   std::map<std::string, float> servo_config_params = iter->second;
  //   temp_servo_config.center = servo_config_params["center"];
  //   temp_servo_config.range = servo_config_params["range"];
  //   temp_servo_config.servo = servo_config_params["num"];
  //   temp_servo_config.direction = servo_config_params["direction"];

  //   // Append to temp_servo_config_array
  //   temp_servo_config_array.request.servos.push_back(temp_servo_config);
  // }

  // // call the client service, return true if succesfull, false if not
  // if (!servos_config_client_.call(temp_servo_config_array)) {
  //   if (!smnc_.debug_mode && !smnc_.run_standalone) {
  //     // Only error out if not in debug mode or standalone mode 
  //     ROS_ERROR("Failed to call service servo_config");
  //     return false;
  //   }
  // }

  return true;
}


void SpotMicroMotionCmd::setServoCommandMessageData() {
  // Set the state of the spot micro kinematics object by setting the foot
  // positions, body position, and body orientation. Retrieve joint angles and
  // set the servo cmd message data
  sm_.setBodyState(body_state_cmd_);
  LegsJointAngles joint_angs = sm_.getLegsJointAngles();//算角度

  // Set the angles for the servo command message
  servo_cmds_rad_["RF_1"] = joint_angs.right_front.ang1;
  servo_cmds_rad_["RF_2"] = joint_angs.right_front.ang2;
  servo_cmds_rad_["RF_3"] = joint_angs.right_front.ang3;
 
  servo_cmds_rad_["RB_1"] = joint_angs.right_back.ang1;
  servo_cmds_rad_["RB_2"] = joint_angs.right_back.ang2;
  servo_cmds_rad_["RB_3"] = joint_angs.right_back.ang3;
 
  servo_cmds_rad_["LF_1"] = joint_angs.left_front.ang1;
  servo_cmds_rad_["LF_2"] = joint_angs.left_front.ang2;
  servo_cmds_rad_["LF_3"] = joint_angs.left_front.ang3;
 
  servo_cmds_rad_["LB_1"] = joint_angs.left_back.ang1;
  servo_cmds_rad_["LB_2"] = joint_angs.left_back.ang2;
  servo_cmds_rad_["LB_3"] = joint_angs.left_back.ang3;
}


void SpotMicroMotionCmd::publishServoProportionalCommand() {
  int array_index = 0;
  for (std::map<std::string, std::map<std::string, float>>::iterator
       iter = smnc_.servo_config.begin();
       iter != smnc_.servo_config.end();
       ++iter) {
 
    std::string servo_name = iter->first;
    std::map<std::string, float> servo_config_params = iter->second;
    
    int servo_num = servo_config_params["num"];
    float cmd_ang_rad = servo_cmds_rad_[servo_name]; //抓目標角度 
    float center_ang_rad = servo_config_params["center_angle_deg"]*M_PI/180.0f; //組裝偏差
    float servo_proportional_cmd = (cmd_ang_rad - center_ang_rad) /
                                   (smnc_.servo_max_angle_deg*M_PI/180.0f);// pwm比例
 
    if (servo_proportional_cmd > 1.0f) {
      servo_proportional_cmd = 1.0f;
      RCLCPP_WARN(this->get_logger(),"Proportional Command above +1.0 was computed, clipped to 1.0");
      RCLCPP_WARN(this->get_logger(),"Joint %s, Angle: %1.2f", servo_name.c_str(), cmd_ang_rad*180.0/M_PI);
 
    } else if (servo_proportional_cmd < -1.0f) {
      servo_proportional_cmd = -1.0f;
      RCLCPP_WARN(this->get_logger(),"Proportional Command below -1.0 was computed, clipped to -1.0");
      RCLCPP_WARN(this->get_logger(),"Joint %s, Angle: %1.2f", servo_name.c_str(), cmd_ang_rad*180.0/M_PI);
    }
 
    servo_array_.servos[array_index].servo = servo_num;
    servo_array_.servos[array_index].value = servo_proportional_cmd; 
    array_index++;
 }

 // Publish message
 servos_proportional_pub_->publish(servo_array_);
}


void SpotMicroMotionCmd::publishZeroServoAbsoluteCommand() {
  // Publish the servo absolute message
  servos_absolute_pub_->publish(servo_array_absolute_);
}


SpotMicroNodeConfig SpotMicroMotionCmd::getNodeConfig() {
  return smnc_;
}


LegsFootPos SpotMicroMotionCmd::getNeutralStance() {
  float len = smnc_.smc.body_length; // body length
  float width = smnc_.smc.body_width; // body width
  float l1 = smnc_.smc.hip_link_length; // liength of the hip link
  float f_offset = smnc_.stand_front_x_offset; // x offset for front feet in neutral stance
  float b_offset = smnc_.stand_back_x_offset; // X offset for back feet in neutral stance
    
  LegsFootPos neutral_stance;
  neutral_stance.right_back  = {.x = -len/2 + b_offset, .y = 0.0f, .z =  width/2 + l1};
  neutral_stance.right_front = {.x =  len/2 + f_offset, .y = 0.0f, .z =  width/2 + l1};
  neutral_stance.left_front  = {.x =  len/2 + f_offset, .y = 0.0f, .z = -width/2 - l1};
  neutral_stance.left_back   = {.x = -len/2 + b_offset, .y = 0.0f, .z = -width/2 - l1};

  return neutral_stance;
}


LegsFootPos SpotMicroMotionCmd::getLieDownStance() {
  float len = smnc_.smc.body_length; // body length
  float width = smnc_.smc.body_width; // body width
  float l1 = smnc_.smc.hip_link_length; // length of the hip link
  float x_off = smnc_.lie_down_feet_x_offset;

  LegsFootPos lie_down_stance;
  lie_down_stance.right_back  = {.x = -len/2 + x_off, .y = 0.0f, .z =  width/2 + l1};
  lie_down_stance.right_front = {.x =  len/2 + x_off, .y = 0.0f, .z =  width/2 + l1};
  lie_down_stance.left_front  = {.x =  len/2 + x_off, .y = 0.0f, .z = -width/2 - l1};
  lie_down_stance.left_back   = {.x = -len/2 + x_off, .y = 0.0f, .z = -width/2 - l1};

  return lie_down_stance;
}


void SpotMicroMotionCmd::commandIdle() {
  cmd_.idle_cmd_ = true;
}


std::string SpotMicroMotionCmd::getCurrentStateName() {
  return state_->getCurrentStateName();
}


void SpotMicroMotionCmd::readInConfigParameters() {
 // ==========================================
  // ：建立 Lambda 輔助函式
  /*lambda標準結構[](){}  []-捕獲區 &以參照(Reference)捕獲外部所有變數
    ()參數區 接收的變數float&的&意義為傳入的為變數本身而非副本，function內所作更改會直接對應到變數本身 {}執行區*/
  // ==========================================
  auto get_float_param = [&](const std::string& name, float& target) {
    // 宣告並同時取得回傳值，一步到位
    target = static_cast<float>(this->declare_parameter<double>(name, 0.0));
  };

  auto get_int_param = [&](const std::string& name, int& target) {
    target = this->declare_parameter<int>(name, 0);
  };

  auto get_bool_param = [&](const std::string& name, bool& target) {
    target = this->declare_parameter<bool>(name, false);
  };

  auto get_vec_param = [&](const std::string& name, std::vector<int>& target) {
    // 先明確宣告一個「具名的」空陣列變數，C++ 就不會把它誤認為結構體
    std::vector<int64_t> default_vec; 
    std::vector<int64_t> temp = this->declare_parameter<std::vector<int64_t>>(name, default_vec);
    target.assign(temp.begin(), temp.end()); 
  };

  // ==========================================
  // yaml 參數讀取
  // ==========================================
  get_float_param("hip_link_length", smnc_.smc.hip_link_length);
  get_float_param("upper_leg_link_length", smnc_.smc.upper_leg_link_length);
  get_float_param("lower_leg_link_length", smnc_.smc.lower_leg_link_length);
  get_float_param("body_width", smnc_.smc.body_width);
  get_float_param("body_length", smnc_.smc.body_length);
  get_float_param("default_stand_height", smnc_.default_stand_height);
  get_float_param("stand_front_x_offset", smnc_.stand_front_x_offset);
  get_float_param("stand_back_x_offset", smnc_.stand_back_x_offset);
  get_float_param("lie_down_height", smnc_.lie_down_height);
  get_float_param("lie_down_foot_x_offset", smnc_.lie_down_feet_x_offset); // 注意這裡結構體叫 feet，參數名叫 foot
  
  get_int_param("num_servos", smnc_.num_servos);
  get_float_param("servo_max_angle_deg", smnc_.servo_max_angle_deg);
  get_float_param("transit_tau", smnc_.transit_tau);//避震器常數：控制站立/趴下過程的平滑度
  get_float_param("transit_rl", smnc_.transit_rl);//速率限制
  get_float_param("transit_angle_rl", smnc_.transit_angle_rl);
  get_float_param("dt", smnc_.dt);
  
  get_bool_param("debug_mode", smnc_.debug_mode);
  get_bool_param("run_standalone", smnc_.run_standalone);
  get_bool_param("plot_mode", smnc_.plot_mode);
  
  get_float_param("max_fwd_velocity", smnc_.max_fwd_velocity);
  get_float_param("max_side_velocity", smnc_.max_side_velocity);
  get_float_param("max_yaw_rate", smnc_.max_yaw_rate);
  get_float_param("z_clearance", smnc_.z_clearance);
  get_float_param("alpha", smnc_.alpha);
  get_float_param("beta", smnc_.beta);

  get_int_param("num_phases", smnc_.num_phases);//8 相步態的接觸時序
  get_vec_param("rb_contact_phases", smnc_.rb_contact_phases);
  get_vec_param("rf_contact_phases", smnc_.rf_contact_phases);
  get_vec_param("lf_contact_phases", smnc_.lf_contact_phases);
  get_vec_param("lb_contact_phases", smnc_.lb_contact_phases);
  get_vec_param("body_shift_phases", smnc_.body_shift_phases);
  
  get_float_param("overlap_time", smnc_.overlap_time);
  get_float_param("swing_time", smnc_.swing_time);
  get_float_param("foot_height_time_constant", smnc_.foot_height_time_constant);
  get_float_param("fwd_body_balance_shift", smnc_.fwd_body_balance_shift);
  get_float_param("back_body_balance_shift", smnc_.back_body_balance_shift);
  get_float_param("side_body_balance_shift", smnc_.side_body_balance_shift);
  
  get_bool_param("publish_odom", smnc_.publish_odom);
  get_float_param("lidar_x_pos", smnc_.lidar_x_pos);
  get_float_param("lidar_y_pos", smnc_.lidar_y_pos);
  get_float_param("lidar_z_pos", smnc_.lidar_z_pos);
  get_float_param("lidar_yaw_angle", smnc_.lidar_yaw_angle);

  // ==========================================
  // 步態相位 還要再改 目前yaml寫死 之後要改成根據速度調整相位數
  // ==========================================
  smnc_.overlap_ticks = round(smnc_.overlap_time / smnc_.dt);
  smnc_.swing_ticks = round(smnc_.swing_time / smnc_.dt);
  
  if (smnc_.num_phases == 8) {    
    smnc_.stance_ticks = 7 * smnc_.swing_ticks;//支撐時間 八拍中只有一拍在空中
    smnc_.overlap_ticks = round(smnc_.overlap_time / smnc_.dt);
    smnc_.phase_ticks = std::vector<int>{smnc_.swing_ticks, smnc_.swing_ticks, smnc_.swing_ticks, smnc_.swing_ticks, smnc_.swing_ticks, smnc_.swing_ticks, smnc_.swing_ticks, smnc_.swing_ticks};
    smnc_.phase_length = smnc_.num_phases * smnc_.swing_ticks;
  } else { 
    smnc_.stance_ticks = 2 * smnc_.overlap_ticks + smnc_.swing_ticks;
    smnc_.overlap_ticks = round(smnc_.overlap_time / smnc_.dt);
    smnc_.phase_ticks = std::vector<int>{smnc_.overlap_ticks, smnc_.swing_ticks, smnc_.overlap_ticks, smnc_.swing_ticks};
    smnc_.phase_length = 2 * smnc_.swing_ticks +    smnc_.overlap_ticks;
  }

  // ==========================================
  //  馬達  透過暫時map讀取後塞進setvoconfig 滿pro
  // ==========================================
  for(auto iter = servo_cmds_rad_.begin(); iter != servo_cmds_rad_.end(); ++iter) {
    std::string servo_name = iter->first; 
    std::map<std::string, float> temp_map;
    
    // ROS2 需要攤平 YAML 字典來讀取
    get_float_param(servo_name + ".num", temp_map["num"]);
    get_float_param(servo_name + ".center", temp_map["center"]);
    get_float_param(servo_name + ".range", temp_map["range"]);
    get_float_param(servo_name + ".direction", temp_map["direction"]);
    get_float_param(servo_name + ".center_angle_deg", temp_map["center_angle_deg"]);
    smnc_.servo_config[servo_name] = temp_map; 
  }
  servo_array_absolute_.servos.clear();
  for(auto iter = smnc_.servo_config.begin(); iter != smnc_.servo_config.end(); ++iter){
    std::map<std::string, float> servo_config_params = iter->second;
    int servo_num = static_cast<int>(servo_config_params["num"]);
    // servo_array_absolute_.servos[absIndex].servo = servo_num;
    i2c_pwm_board_msgs::msg::Servo temp_servo;
    temp_servo.servo = servo_num;
    temp_servo.value = 0.0f;
    servo_array_absolute_.servos.push_back(temp_servo);
  }

  RCLCPP_INFO(this->get_logger(), "Pro 機器狗參數載入完");
}


void SpotMicroMotionCmd::standCommandCallback(
    const std_msgs::msg::Bool::SharedPtr msg) {
  if (msg->data == true) {cmd_.stand_cmd_ = true;}
  RCLCPP_INFO(this->get_logger(), "🚨 報告！我收到 Stand 指令了！內容是: %d", msg->data);
}


void SpotMicroMotionCmd::idleCommandCallback(
    const std_msgs::msg::Bool::SharedPtr msg) {
  if (msg->data == true) {cmd_.idle_cmd_ = true;}
}


void SpotMicroMotionCmd::walkCommandCallback(
    const std_msgs::msg::Bool::SharedPtr msg) {
  if (msg->data == true) {cmd_.walk_cmd_ = true;}
}

// x:左右傾斜(roll) y:台高低(pitch) z 左右看(yaw)
void SpotMicroMotionCmd::angleCommandCallback(
    const geometry_msgs::msg::Vector3::SharedPtr msg) {
  cmd_.phi_cmd_ = msg->x;
  cmd_.theta_cmd_ = msg->y;
  cmd_.psi_cmd_ = msg->z;
}


void SpotMicroMotionCmd::velCommandCallback(
    const geometry_msgs::msg::Twist::SharedPtr msg) {
  cmd_.x_vel_cmd_mps_ = msg->linear.x; //前後速度
  cmd_.y_vel_cmd_mps_ = msg->linear.y;//左右速度
  cmd_.yaw_rate_cmd_rps_ = msg->angular.z;//角速度
}


void SpotMicroMotionCmd::resetEventCommands() {
  // Reset all event commands, setting all command states false if they were true 
  cmd_.resetEventCmds(); 
}


void SpotMicroMotionCmd::handleInputCommands() {  
  // Delegate input handling to state
  state_->handleInputCommands(sm_.getBodyState(), smnc_, cmd_, this, &body_state_cmd_);
}


void SpotMicroMotionCmd::changeState(std::unique_ptr<SpotMicroState> sms) {
  // Change the active state
  state_ = std::move(sms);

  // Call init method of new state
  state_->init(sm_.getBodyState(), smnc_, cmd_, this);

  // Reset all command values
  cmd_.resetAllCommands();
}


void SpotMicroMotionCmd::publishBodyState() {
  // Order of the float array:
  // 3 floats xyz for rightback leg foot pos
  // 3 floats xyz for rightfront leg foot pos
  // 3 floats xyz for leftfront leg foot pos
  // 3 floats xyz for leftback leg foot pos
  // 3 floats for xyz body position
  // 3 floats for phi, theta, psi body angles
  
  body_state_msg_.data[0] = body_state_cmd_.leg_feet_pos.right_back.x;
  body_state_msg_.data[1] = body_state_cmd_.leg_feet_pos.right_back.y;
  body_state_msg_.data[2] = body_state_cmd_.leg_feet_pos.right_back.z;

  body_state_msg_.data[3] = body_state_cmd_.leg_feet_pos.right_front.x;
  body_state_msg_.data[4] = body_state_cmd_.leg_feet_pos.right_front.y;
  body_state_msg_.data[5] = body_state_cmd_.leg_feet_pos.right_front.z;

  body_state_msg_.data[6] = body_state_cmd_.leg_feet_pos.left_front.x;
  body_state_msg_.data[7] = body_state_cmd_.leg_feet_pos.left_front.y;
  body_state_msg_.data[8] = body_state_cmd_.leg_feet_pos.left_front.z;

  body_state_msg_.data[9] = body_state_cmd_.leg_feet_pos.left_back.x;
  body_state_msg_.data[10] = body_state_cmd_.leg_feet_pos.left_back.y;
  body_state_msg_.data[11] = body_state_cmd_.leg_feet_pos.left_back.z;

  body_state_msg_.data[12] = body_state_cmd_.xyz_pos.x;
  body_state_msg_.data[13] = body_state_cmd_.xyz_pos.y;
  body_state_msg_.data[14] = body_state_cmd_.xyz_pos.z;

  body_state_msg_.data[15] = body_state_cmd_.euler_angs.phi;//roll
  body_state_msg_.data[16] = body_state_cmd_.euler_angs.theta;//pitch
  body_state_msg_.data[17] = body_state_cmd_.euler_angs.psi;//yaw

  body_state_pub_->publish(body_state_msg_);
}


void SpotMicroMotionCmd::publishLcdMonitorData() {
  lcd_state_string_msg_.data = getCurrentStateName();

  lcd_vel_cmd_msg_.linear.x = cmd_.getXSpeedCmd();
  lcd_vel_cmd_msg_.linear.y = cmd_.getYSpeedCmd();
  lcd_vel_cmd_msg_.angular.z = cmd_.getYawRateCmd();
  
  lcd_angle_cmd_msg_.x = cmd_.getPhiCmd();
  lcd_angle_cmd_msg_.y = cmd_.getThetaCmd();
  lcd_angle_cmd_msg_.z = cmd_.getPsiCmd();  

  lcd_state_pub_->publish(lcd_state_string_msg_);
  lcd_vel_cmd_pub_->publish(lcd_vel_cmd_msg_);
  // lcd_angle_cmd_pub_->publish(lcd_angle_cmd_msg_);
}


void SpotMicroMotionCmd::publishStaticTransforms() {

  geometry_msgs::msg::TransformStamped tr_stamped;
  
  // base_link to front_link transform
  /*creatrTransform(父節點，子節點,x,y,z,roll,pitch,yaw)*/
  tr_stamped = createTransform("base_link", "front_link",
                               0.0, 0.0, 0.0,
                               0.0, 0.0, 0.0);
  static_transform_br_->sendTransform(tr_stamped);

  // base_link to rear_link transform
  tr_stamped = createTransform("base_link", "rear_link",
                               0.0, 0.0, 0.0,
                               0.0, 0.0, 0.0);
  static_transform_br_->sendTransform(tr_stamped);

  // base_link to lidar_link transform  
  float x_offset = smnc_.lidar_x_pos;
  float y_offset = smnc_.lidar_y_pos;
  float z_offset = smnc_.lidar_z_pos;
  float yaw_angle = smnc_.lidar_yaw_angle*M_PI/180.0; // Converted to radians
  tr_stamped = createTransform("base_link", "lidar_link",
                               x_offset, y_offset, z_offset,
                               0.0, 0.0, yaw_angle);
  static_transform_br_->sendTransform(tr_stamped);

  // legs to leg cover transforms
  const VectorStringPairs   leg_cover_pairs = { 
      { "front_left_leg_link",  "front_left_leg_link_cover" },
      { "front_right_leg_link", "front_right_leg_link_cover"},
      { "rear_right_leg_link",  "rear_right_leg_link_cover" },
      { "rear_left_leg_link",   "rear_left_leg_link_cover" }};
  
  // Loop over all leg to leg cover name pairs, publish a 0 dist/rot transform 
  for (auto it = leg_cover_pairs.begin(); it != leg_cover_pairs.end(); it++) {
    tr_stamped = createTransform(it->first, it->second,
                               0.0, 0.0, 0.0,
                               0.0, 0.0, 0.0);
    static_transform_br_->sendTransform(tr_stamped); 
  }

  // foot to toe link transforms
  const VectorStringPairs foot_toe_pairs { 
      { "front_left_foot_link",  "front_left_toe_link" },
      { "front_right_foot_link", "front_right_toe_link"},
      { "rear_right_foot_link",  "rear_right_toe_link" },
      { "rear_left_foot_link",   "rear_left_toe_link" }};
  
  // Loop over all name pairs, publish the same transform
  for (auto it = foot_toe_pairs.begin(); it != foot_toe_pairs.end(); it++) {
    tr_stamped = createTransform(it->first, it->second,
                               0.0, 0.0, -0.13, // TODO: Change to a parameter 腳尖長度
                               0.0, 0.0, 0.0);
    static_transform_br_->sendTransform(tr_stamped); 
  }
}


void SpotMicroMotionCmd::publishDynamicTransforms() {

  // Get joint angles
  LegsJointAngles joint_angs = sm_.getLegsJointAngles();

  // Declare utility variables
  geometry_msgs::msg::TransformStamped transform_stamped;
  Affine3d temp_trans;

  /////////////////
  // ODOMETRY /////
  /////////////////
  if (smnc_.publish_odom) {
    transform_stamped = eigAndFramesToTrans(getOdometryTransform(), "odom", "base_footprint");
    transform_br_->sendTransform(transform_stamped);  
  }
  
  /////////////////
  // BODY CENTER //
  /////////////////
  
  temp_trans = matrix4fToAffine3d(sm_.getBodyHt());

  // Rotate body center transform to desired coordinate system
  // Original, kinematics, coordinate frame: x forward, y up, z right
  // Desired orientation: x forward, y left, z up
  // Rotate the robot frame +90 deg about the global +X axis (pre-multiply),
  // then rotate the local coordinate system by -90 (post multiply)
  temp_trans =  AngleAxisd(M_PI/2.0, Vector3d::UnitX()) * 
                temp_trans * 
                AngleAxisd(-M_PI/2.0, Vector3d::UnitX());

  // Create and broadcast the transform
  transform_stamped = eigAndFramesToTrans(temp_trans, "base_footprint", "base_link");
  transform_br_->sendTransform(transform_stamped);


  /////////////////////
  // FRONT RIGHT LEG //
  /////////////////////
  // Shoulder
  transform_stamped = createTransform("base_link", "front_right_shoulder_link",
                                      smnc_.smc.body_length/2.0, -smnc_.smc.body_width/2.0, 0.0,
                                      joint_angs.right_front.ang1, 0.0, 0.0);      
  transform_br_->sendTransform(transform_stamped);

  // leg
  transform_stamped = createTransform("front_right_shoulder_link","front_right_leg_link",
                                      0.0, -smnc_.smc.hip_link_length, 0.0,
                                      0.0, -joint_angs.right_front.ang2, 0.0);                         
  transform_br_->sendTransform(transform_stamped);

  // foot
  transform_stamped = createTransform("front_right_leg_link","front_right_foot_link",
                                      0.0, 0.0, -smnc_.smc.upper_leg_link_length,
                                      0.0, -joint_angs.right_front.ang3, 0.0);                         
  transform_br_->sendTransform(transform_stamped);


  ////////////////////
  // REAR RIGHT LEG //
  ////////////////////
  // shoulder
  transform_stamped = createTransform("base_link", "rear_right_shoulder_link",
                                      -smnc_.smc.body_length/2.0, -smnc_.smc.body_width/2.0, 0.0,
                                      joint_angs.right_back.ang1, 0.0, 0.0);      
  transform_br_->sendTransform(transform_stamped);
  
  // leg
  transform_stamped = createTransform("rear_right_shoulder_link","rear_right_leg_link",
                                      0.0, -smnc_.smc.hip_link_length, 0.0,
                                      0.0, -joint_angs.right_back.ang2, 0.0);                         
  transform_br_->sendTransform(transform_stamped);

  // foot
  transform_stamped = createTransform("rear_right_leg_link","rear_right_foot_link",
                                      0.0, 0.0, -smnc_.smc.upper_leg_link_length,
                                      0.0, -joint_angs.right_back.ang3, 0.0);                         
  transform_br_->sendTransform(transform_stamped);


  ////////////////////
  // FRONT LEFT LEG //
  ////////////////////
  // Shoulder
  transform_stamped = createTransform("base_link", "front_left_shoulder_link",
                                      smnc_.smc.body_length/2.0, smnc_.smc.body_width/2.0, 0.0,
                                      -joint_angs.left_front.ang1, 0.0, 0.0);      
  transform_br_->sendTransform(transform_stamped);

  // leg
  transform_stamped = createTransform("front_left_shoulder_link","front_left_leg_link",
                                      0.0, smnc_.smc.hip_link_length, 0.0,
                                      0.0, joint_angs.left_front.ang2, 0.0);                         
  transform_br_->sendTransform(transform_stamped);

  // foot
  transform_stamped = createTransform("front_left_leg_link","front_left_foot_link",
                                      0.0, 0.0, -smnc_.smc.upper_leg_link_length,
                                      0.0, joint_angs.left_front.ang3, 0.0);                         
  transform_br_->sendTransform(transform_stamped);


  ///////////////////
  // REAR LEFT LEG //
  ///////////////////
  // shoulder
  transform_stamped = createTransform("base_link", "rear_left_shoulder_link",
                                      -smnc_.smc.body_length/2.0, smnc_.smc.body_width/2.0, 0.0,
                                      -joint_angs.left_back.ang1, 0.0, 0.0);      
  transform_br_->sendTransform(transform_stamped);

  // leg
  transform_stamped = createTransform("rear_left_shoulder_link","rear_left_leg_link",
                                      0.0, smnc_.smc.hip_link_length, 0.0,
                                      0.0, joint_angs.left_back.ang2, 0.0);                         
  transform_br_->sendTransform(transform_stamped);

  // foot
  transform_stamped = createTransform("rear_left_leg_link","rear_left_foot_link",
                                      0.0, 0.0, -smnc_.smc.upper_leg_link_length,
                                      0.0, joint_angs.left_back.ang3, 0.0);                         
  transform_br_->sendTransform(transform_stamped);
}


void SpotMicroMotionCmd::integrateOdometry() {
  // Get loop time, heading, and rate commands
  float dt = smnc_.dt;
  float psi = robot_odometry_.euler_angs.psi;//yaw
  float x_spd = cmd_.getXSpeedCmd();
  float y_spd = -cmd_.getYSpeedCmd();
  float yaw_rate = -cmd_.getYawRateCmd();

  // This is the odometry coordinate frame (not the robot kinematic frame) 
  float x_dot = x_spd*cos(psi) - y_spd*sin(psi);
  float y_dot = x_spd*sin(psi) + y_spd*cos(psi);
  float yaw_dot = yaw_rate;

  // Integrate x and y position, and yaw angle, from commanded values
  // y speed and yaw rate are reversed due to mismatch between command 
  // coordinate frame and world coordinate frame
  robot_odometry_.xyz_pos.x += x_dot*dt;
  robot_odometry_.xyz_pos.y += y_dot*dt;
  robot_odometry_.euler_angs.psi += yaw_dot*dt;
} 


Affine3d SpotMicroMotionCmd::getOdometryTransform() {
  // Create odemtry translation and rotation, and combine together
  Translation3d translation(robot_odometry_.xyz_pos.x, robot_odometry_.xyz_pos.y, 0.0); //平移矩陣
  AngleAxisd rotation(robot_odometry_.euler_angs.psi, Vector3d::UnitZ());//Vector3d::UnitZ() 代表Z軸向量 這行代表繞Z軸旋轉的航向角
  return (translation * rotation);//仿射矩陣（齊次轉換矩陣）
}
