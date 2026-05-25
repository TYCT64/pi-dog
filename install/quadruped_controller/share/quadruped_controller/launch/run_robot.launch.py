import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # 告訴系統我們的 YAML 基因圖譜放在哪裡
    config_file = os.path.join(
        get_package_share_directory('quadruped_controller'),
        'config',
        'spot_micro_config.yaml'
    )

    return LaunchDescription([
        # 啟動機器狗的大腦節點，並把參數檔餵給它！
        Node(
            package='quadruped_controller',
            executable='ik_test_node',
            name='ik_test_node',
            output='screen',
            parameters=[config_file]
        )
    ])