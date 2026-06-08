import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # 1. 鎖定我們的 YAML 基因圖譜位置
    config_file = os.path.join(
        get_package_share_directory('quadruped_controller'),
        'config',
        'spot_micro_config.yaml'
    )

    

    return LaunchDescription([
        # 【節點一】：硬體翻譯官（脊髓神經），並強迫它走 i2c_bus = 1
        Node(
            package='i2c_pwm_board',
            executable='node',
            name='i2c_pwm_board_node',
            output='screen',
            parameters=[{'i2c_bus': 1}]  # 完美解決之前硬改 C++ 的問題！
        ),

        Node(
            package='mpu6050_driver',
            executable='mpu6050_node',
            name='mpu6050_node',
            output='screen'
        ),

        Node(
            package='imu_complementary_filter',
            executable='complementary_filter_node',
            name='complementary_filter_gain_node',
            output='screen',
            parameters=[
                {'do_bias_estimation': True},
                {'do_adaptive_gain': True},
                {'use_mag': False},      # MPU6050 沒有磁力計，必須設為 False！
                {'gain_acc': 0.01},      # 信任加速度計的程度 (越小越不相信震動)
                {'gain_mag': 0.01},
                {'publish_tf': False}    # 不要干擾你原本狗的 TF
            ],
            remappings=[
                ('/imu/data_raw', '/imu/data_raw'),
                ('/imu/data', '/imu/data') # 算好的完美姿態會從這裡吐出來
            ]
        ),

        # 【節點二】：機器狗大腦（核心中樞），自動餵 YAML 參數
        Node(
            package='quadruped_controller',
            executable='ik_test_node',
            name='ik_test_node',
            output='screen',
            parameters=[config_file],
           remappings=[
                ('/servos_proportional', '/servos_proportional_1'),
                ('/servos_absolute', '/servos_absolute_1'),
                ('/config_servos', '/config_servos_1'),        # 大腦打給硬體的設定專線
                ('/set_pwm_frequency', '/set_pwm_frequency_1') # 大腦打給硬體的頻率專線
            ]
        )
    ])