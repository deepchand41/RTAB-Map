# RTAB-Map with Astra Pro Camera (Visual Odometry)

This repository contains a **ROS 2 workspace** configured to run **RTAB-Map SLAM using visual odometry** with the **Orbbec Astra Pro RGB-D camera**.  
The setup is camera-based and **does not require wheel odometry**, making it ideal for indoor SLAM experiments.

---

## 📌 Features
- Visual Odometry using RGB-D camera
- Real-time 3D mapping with RTAB-Map
- Compatible with **ROS 2 Foxy**
- Supports **database (.db) visualization**
- Clean repository structure (no build artifacts)

---

## 🧰 System Requirements
- Ubuntu 20.04
- ROS 2 Foxy
- Orbbec Astra Pro Camera
- OpenCV
- RTAB-Map (ROS 2 version)

---

## 📂 Repository Structure
```text
RTAB_MAP/
├── src/                 # ROS 2 source packages
├── launch/              # Launch files
├── config/              # RTAB-Map parameters
├── rviz/                # RViz configurations
├── README.md
└── .gitignore
```
🔧 Installation
1️⃣ Install ROS 2 Foxy
```text
sudo apt update
sudo apt install ros-foxy-desktop

source /opt/ros/foxy/setup.bash
```
2️⃣ Install RTAB-Map
```text
sudo apt install ros-foxy-rtabmap-ros
```
Verify:
```text
ros2 pkg list | grep rtabmap
```

3️⃣ Install Astra Pro Drivers
```text
sudo apt install ros-foxy-astra-camera
```
## 🚀 Running RTAB-Map with Astra Pro

Add USB permissions:
```text
sudo usermod -a -G plugdev $USER
```
🔁 Reboot the system after this step.

🏗️ Build the Workspace

```text
cd ~/electronic_ws
colcon build --symlink-install
source install/setup.bash
```

Step 1: Launch Astra Pro Camera
```text
ros2 launch astra_camera astro_pro_plus.launch.xml

Verify topics:
ros2 topic list
```
Step 2: Start RTAB-MAP (RGB-D + Visual Odometry)

```text
ros2 launch rtabmap_launch rtabmap.launch.py \
  rgb_topic:=/camera/color/image_raw \
  depth_topic:=/camera/depth/image_raw \
  camera_info_topic:=/camera/color/camera_info \
  depth_camera_info_topic:=/camera/depth/camera_info \
  visual_odometry:=true \
  frame_id:=camera_link \
  approx_sync:=true \
  approx_sync_max_interval:=0.03 \
  queue_size:=50 \
  wait_for_transform:=0.3 \
  rtabmap_viz:=true \
  rviz:=false \
  rtabmap_args:="--delete_db_on_start \
    --Rtabmap/DetectionRate 1.0 \
    --RGBD/LinearUpdate 0.05 \
    --RGBD/AngularUpdate 0.05 \
    --Reg/Force3DoF false \
    --RGBD/OptimizeMaxError 5.0 \
    --Vis/MinInliers 15 \
    --Vis/InlierDistance 0.15 \
    --Kp/MaxFeatures 800 \
    --Vis/MaxFeatures 1500 \
    --RGBD/LocalRadius 10 \
    --Rtabmap/LoopThr 0.11"
```

## Fix Camera Transform Publishing
```text
# Ensure camera publishes TF at high rate
ros2 param set /camera/camera publish_tf true
ros2 param set /camera/camera tf_publish_rate 30.0
```

🖥️ Step 3: Visualization in RViz2

```text
rviz2
```

Add Displays
- Map → /map
- PointCloud2 → /rtabmap/cloud_map
- TF
- Odometry → /odom
- Image → /camera/color/image_raw

Set Fixed Frame:
```text
map
```

💾 Step 4: Save the Map
```text
ros2 service call /rtabmap/save_map std_srvs/srv/Empty {}
```
Saved database:
```text
~/.ros/rtabmap.db
```

🔁 Step 5: Localization Mode (Using Saved Map)
```text
ros2 launch rtabmap_ros rtabmap.launch.py \
  localization:=true \
  database_path:=~/.ros/rtabmap.db
```

## Key Improvements Made
1. Loop Closure Fixes (Most Important)
```text
--RGBD/OptimizeMaxError 5.0      # Was 3.0, now accepts more error
--Vis/MinInliers 15               # Was 20, easier to match
--Vis/InlierDistance 0.15         # Was 0.1, more tolerant
--RGBD/LocalRadius 10             # Larger area for loop detection
--Rtabmap/LoopThr 0.11           # Slightly relaxed threshold
```
loop closures were failing because error was 3.7-5.7 but max allowed was 3.0. Now it's 5.0.

2. Transform Handling
```text
wait_for_transform:=0.3           # Increased wait time
queue_size:=50                    # Larger buffer
approx_sync_max_interval:=0.03    # More sync tolerance
```
3. More Features for Better Matching
```text
--Kp/MaxFeatures 800
--Vis/MaxFeatures 1500
```

More features = better loop closure detection
