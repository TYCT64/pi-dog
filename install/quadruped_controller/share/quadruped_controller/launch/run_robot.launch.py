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