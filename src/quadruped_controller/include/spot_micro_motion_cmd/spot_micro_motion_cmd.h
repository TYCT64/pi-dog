#pragma once //designed to include the current source file only once in a single compilation.
#ifndef SPOT_MICRO_MOTION_CMD //usd for conditional compiling.
#define SPOT_MICRO_MOTION_CMD
// #include "geometry_msgs/msg/twist.hpp"
// #include "i2c_pwm_board_msgs/msg/servo_array.hpp"
// #include "rclcpp/rclcpp.hpp"

// #include "std_msgs/Bool.h"
// #include "std_msgs/String.h"
// #include "geometry_msgs/Vector3.h"
// #include "geometry_msgs/Twist.h"
// #include "std_msgs/Float32MultiArray.h"
// #include "i2cpwm_board/Servo.h"
// #include "i2cpwm_board/ServoArray.h"
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"
#include "i2c_pwm_board_msgs/msg/servo_array.hpp"
#include "i2c_pwm_board_msgs/msg/servo.hpp"
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/static_transform_broadcaster.h>

#include "command.h"
#include "spot_micro_kinematics/spot_micro_kinematics.h"
#include "spot_micro_state.h"

// Define a configuration struct
// To hold configuration parameters from parameter server/config file
struct SpotMicroNodeConfig {
  smk::SpotMicroConfig smc;
  float default_stand_height;
  float stand_front_x_offset;
  float stand_back_x_offset;
  float lie_down_height;
  float lie_down_feet_x_offset;
  int num_servos;
  float servo_max_angle_deg;
  std::map<std::string, std::map<std::string, float>> servo_config;
  float dt;
  float transit_tau;
  float transit_rl;
  float transit_angle_rl;
  bool debug_mode;
  bool run_standalone;
  bool plot_mode;
  float max_fwd_velocity;
  float max_side_velocity;
  float max_yaw_rate;
  float z_clearance;
  float alpha;
  float beta;
  int num_phases;
  std::vector<int> rb_contact_phases;
  std::vector<int> rf_contact_phases;
  std::vector<int> lf_contact_phases;
  std::vector<int> lb_contact_phases;
  float overlap_time;
  float swing_time;
  int overlap_ticks;
  int swing_ticks;
  int stance_ticks;
  std::vector<int> phase_ticks;
  int phase_length;
  float foot_height_time_constant;
  std::vector<int> body_shift_phases;
  float fwd_body_balance_shift;
  float side_body_balance_shift;
  float back_body_balance_shift;
  bool publish_odom;
  float lidar_x_pos;
  float lidar_y_pos;
  float lidar_z_pos;
  float lidar_yaw_angle;
};


/* defining the class */
class SpotMicroMotionCmd : public rclcpp::Node
{
 public:
  // Constructor
  SpotMicroMotionCmd(); 
  
  // Destructor
  ~SpotMicroMotionCmd(); 
  
  // Main loop runner, called periodically at the loop rate
  void runOnce();

  // Publish a servo configuration message
  bool publishServoConfiguration();

  // Set servo proprotional message data
  void setServoCommandMessageData();

  // Publishes a servo proportional command message
  void publishServoProportionalCommand(); 

  // Publishes a servo absolute command message with all servos set to a command
  // value of 0. This effectively disables the servos (stops them from holding
  // position, should just freewheel)
  void publishZeroServoAbsoluteCommand();

  // Returns the loaded parameters
  SpotMicroNodeConfig getNodeConfig();

  // Returns leg positions representing a neutral stance
  smk::LegsFootPos getNeutralStance();

  // Returns leg positions representing a lieing down stance
  smk::LegsFootPos getLieDownStance();

  // Manually override and command idle mode, used for shutdown
  void commandIdle();

  // Returns current state name
  std::string getCurrentStateName();

 private:
  // Declare SpotMicroState a friend so it can access and modify private
  // members of this class
  friend class SpotMicroState;

  // Pointer to state object
  std::unique_ptr<SpotMicroState> state_;

  // Command object for encapsulating external commands
  Command cmd_; // Command object, encapsulate commands

  // Spot Micro Kinematics object. Holds kinematic state of robot, and holds
  // kinematics operations for setting position/orientation of the robot
  smk::SpotMicroKinematics sm_; 

  // Spot Micro Node Config object
  SpotMicroNodeConfig smnc_;

  // Holds the body state to be commanded: feet position, body position and
  // angles
  smk::BodyState body_state_cmd_; 

  // Odometry of the robot position and orientation based on integrated rate
  // commands. Only x and y position, and yaw angle, will be integrated from
  // rate commands
  smk::BodyState robot_odometry_;

  // Map to hold servo command values in radians
  std::map<std::string, float> servo_cmds_rad_ = { {"RF_3", 0.0f}, {"RF_2", 0.0f}, {"RF_1", 0.0f},
                                                   {"RB_3", 0.0f}, {"RB_2", 0.0f}, {"RB_1", 0.0f},
                                                   {"LB_3", 0.0f}, {"LB_2", 0.0f}, {"LB_1", 0.0f},
                                                   {"LF_3", 0.0f}, {"LF_2", 0.0f}, {"LF_1", 0.0f} };

  // Reads parameters from parameter server to initialize spot micro node config
  // struct
  void readInConfigParameters();

  // Servo array message for servo proportional command
  i2c_pwm_board_msgs::msg::ServoArray servo_array_;

  // Servo array message for servo absolute command
  i2c_pwm_board_msgs::msg::ServoArray servo_array_absolute_;


  // ROS publisher and subscriber handles
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr stand_sub_; //讀取站立bool
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr idle_sub_; //讀取趴下bool
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr  walk_sub_;//讀取行走bool
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr vel_cmd_sub_;//讀取Twist訊息包含 xyz 直線速度和 xyz 旋轉角速度）
  rclcpp::Subscription<geometry_msgs::msg::Vector3>::SharedPtr body_angle_cmd_sub_; //原地姿態控制 三軸旋轉角度指令
  rclcpp::Publisher<i2c_pwm_board_msgs::msg::ServoArray>::SharedPtr servos_absolute_pub_; // 12個馬達的絕對角度(通常是弧度)
  rclcpp::Publisher<i2c_pwm_board_msgs::msg::ServoArray>::SharedPtr servos_proportional_pub_; //12個馬達換算後的pwm比例
  rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr body_state_pub_; //除錯與報表
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr lcd_vel_cmd_pub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr lcd_state_pub_;
  // rclcpp::ServiceClient servos_config_client_;
  // tf2_ros::TransformBroadcaster transform_br_;
  // tf2_ros::StaticTransformBroadcaster static_transform_br_;
  std::unique_ptr<tf2_ros::TransformBroadcaster> transform_br_; //動態座標廣播器:無時無刻都在改變的座標
  std::unique_ptr<tf2_ros::StaticTransformBroadcaster> static_transform_br_;//靜態座標廣播器:永遠不會改變的座標
  /*unique_ptr當節點被關閉（Ctrl+C）時自動回收記憶體*/
  // Message for encapsulating robot body state
  std_msgs::msg::Float32MultiArray body_state_msg_; //除錯用數據包裹

  // Messages to hold robot state information for displaying on LCD monitor
  // and for any other monitoring purposes.
  std_msgs::msg::String lcd_state_string_msg_;
  geometry_msgs::msg::Twist lcd_vel_cmd_msg_;
  geometry_msgs::msg::Vector3 lcd_angle_cmd_msg_;

  // Callback method for stand command
  void standCommandCallback(const std_msgs::msg::Bool::SharedPtr msg);

  // Callback method for idle command
  void idleCommandCallback(const std_msgs::msg::Bool::SharedPtr msg);

  // Callback method for walk command
  void walkCommandCallback(const std_msgs::msg::Bool::SharedPtr msg);

  // Callback method for angle command
  void angleCommandCallback(const geometry_msgs::msg::Vector3::SharedPtr msg);

  // Callback method for velocity command
  // Currently, the only supported commands from this message are 
  // x and y axis linear velocity, and z axis angular rate 
  void velCommandCallback(const geometry_msgs::msg::Twist::SharedPtr msg);
  // Resets all events if they were true
  void resetEventCommands();

  // State Machine Related Methods
  // Handle input commands, delegate to state machine
  void handleInputCommands();

  // Changes state of the state machine
  void changeState(std::unique_ptr<SpotMicroState> sms);

  // Publishes body state as a float array for plotting by another node
  void publishBodyState();

  // Publish LCD monitor messages
  void publishLcdMonitorData();

  // Broadcast static tf2 coordinate frame transformation to /tf_static
  // Should only be called once at initalization, as it's only for static
  // transformations of    the robot model that do not change over time
  void publishStaticTransforms();

  // Broadcast dynamic tf2 coordinate frame transformations to /tf
  // Will broadcast dynamic robot and leg joint transformations
  void publishDynamicTransforms();

  // Integrate robot odometry. The robot doesn't actually have any
  // sensed odometry, but an open loop estimate derived from velocity
  // commands should still be useful
  void integrateOdometry();

  // Calculates the robot odometry coordinate frame
  Eigen::Affine3d getOdometryTransform();

};
#endif  
