#include "rclcpp/rclcpp.hpp"
// 引入我們剛移植好的小腦設計圖
#include "spot_micro_motion_cmd/spot_micro_motion_cmd.h"

int main(int argc, char ** argv) {
    // 1. 初始化 ROS 2 環境
    rclcpp::init(argc, argv);

    // 2. 實例化 Mike 的小腦節點！
    auto node = std::make_shared<SpotMicroMotionCmd>();

    RCLCPP_INFO(node->get_logger(), "🐶 Spot Micro 機器狗核心 (FSM 小腦) 已成功啟動！");

    // 3. 設定心跳頻率 (Mike 預設的 dt 通常是 0.02 秒，也就是 50Hz)
    rclcpp::Rate loop_rate(50); 

    // 4. 進入無窮迴圈，直到按下 Ctrl+C
    while (rclcpp::ok()) {
        // 【核心邏輯】讓小腦算一次目前的狀態與腳步座標
        node->runOnce();           
        
        // 【背景任務】處理所有的 Subscriber 接收到的搖桿訊號
        rclcpp::spin_some(node);   
        
        // 【維持心跳】睡一下，確保一秒鐘精準跑 50 次
        loop_rate.sleep();         
    }

    // 5. 安全關閉系統
    rclcpp::shutdown();
    return 0;
}