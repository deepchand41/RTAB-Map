import os
import subprocess
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import LifecycleNode
from launch_ros.actions import Node
from launch import LaunchDescription


def generate_launch_description():

    # YAML config file (your cleaned version)
    driver_config = os.path.join(
        get_package_share_directory('lslidar_driver'),
        'config',
        'lslidar_m10p.yaml'
    )

    # RViz config
    rviz_config = os.path.join(
        get_package_share_directory('lslidar_driver'),
        'rviz',
        'lslidar_x10.rviz'
    )

    # ROS distro
    ros_distro = subprocess.check_output("echo $ROS_DISTRO", shell=True).strip()

    # --- Driver Node ---
    driver_node = LifecycleNode(
        package='lslidar_driver',
        executable='lslidar_driver_node',
        name='lslidar_driver_node',
        namespace='',      # <- NO NAMESPACE
        output='screen',
        parameters=[driver_config],
    )

    # --- RViz Node ---
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config],
        output='screen'
    )

    return LaunchDescription([
        driver_node,
        rviz_node
    ])
