# RTAB-Map with Astra Pro Camera (Visual Odometry)

This repository contains a ROS 2 workspace configured to run RTAB-Map using visual odometry with the Orbbec Astra Pro RGB-D Camera. The setup focuses on camera-based SLAM (no wheel odometry required) and is suitable for indoor mapping and localization experiments.

# 📦 Workspace Overview
electronic_ws/
├── src/
│ ├── rtabmap_ros/
│ ├── astra_camera/
│ ├── astra_description/ (optional)
│ └── your_custom_launch/
├── install/
├── build/
└── log/

# 🧰 System Requirements

- Ubuntu: 20.04 LTS
- ROS 2: Foxy Fitzroy
- Camera: Orbbec Astra Pro (RGB-D)
- RTAB-Map: rtabmap & rtabmap_ros
- OpenCV: ≥ 4.x

# 🔧 Dependencies Installation

1. Install ROS 2 Foxy
     sudo apt update
     sudo apt install ros-foxy-desktop
   
