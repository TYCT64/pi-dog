cmake_minimum_required(VERSION 3.8)
project(quadruped_controller)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(i2c_pwm_board_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)    # 解決找不到 Twist 的問題
find_package(tf2 REQUIRED)              # 機器人座標轉換
find_package(tf2_ros REQUIRED)          # 座標廣播器
find_package(tf2_eigen REQUIRED)        # 矩陣數學轉換
find_package(tf2_geometry_msgs REQUIRED) 
find_package(Eigen3 REQUIRED)
# ==========================================
# ▼▼▼ 這裡是你需要新增的「核心編譯區塊」 ▼▼▼
# ==========================================

# 1. 告訴編譯器標頭檔 (.h) 放在哪個資料夾
include_directories(include
include/spot_micro_motion_cmd
  src/motion_cmd/smfsm)

# 2. 定義執行檔名稱，以及需要把哪些 .cpp 檔包進來一起編譯
# 2. 定義執行檔名稱，以及需要把哪些 .cpp 檔包進來一起編譯
add_executable(ik_test_node 
  src/main.cpp 
  src/kinematics/spot_micro_kinematics.cpp
  src/kinematics/utils.cpp   # <--- 新增這行！
  src/kinematics/spot_micro_leg.cpp

  src/motion_cmd/spot_micro_motion_cmd.cpp
  src/motion_cmd/utils.cpp
  src/motion_cmd/smfsm/spot_micro_balance.cpp
  src/motion_cmd/smfsm/spot_micro_idle.cpp
  src/motion_cmd/smfsm/spot_micro_state.cpp
  src/motion_cmd/smfsm/spot_micro_stand.cpp
  src/motion_cmd/smfsm/spot_micro_transition_idle.cpp
  src/motion_cmd/smfsm/spot_micro_transition_stand.cpp
  src/motion_cmd/smfsm/spot_micro_walk.cpp
)

target_include_directories(ik_test_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${EIGEN3_INCLUDE_DIRS}
)

# 3. 把 ROS 2 的函式庫 (rclcpp, std_msgs) 連結到你的執行檔上
ament_target_dependencies(ik_test_node
  rclcpp
  std_msgs
  geometry_msgs
  sensor_msgs
  tf2
  tf2_ros
  tf2_eigen
  tf2_geometry_msgs
  i2c_pwm_board_msgs
)
# 4. 安裝設定：告訴 ROS 2 編譯完要把執行檔放到哪裡，這樣 ros2 run 才找得到
install(TARGETS
  ik_test_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}
)
install(PROGRAMS
  scripts/keyboard_teleop.py
  DESTINATION lib/${PROJECT_NAME}
)

# ==========================================
# ▲▲▲ 新增區塊結束 ▲▲▲
# ==========================================

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()