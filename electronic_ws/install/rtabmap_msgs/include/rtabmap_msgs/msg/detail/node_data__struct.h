// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/NodeData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
// Member 'ground_truth_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'gps'
#include "rtabmap_msgs/msg/detail/gps__struct.h"
// Member 'image'
// Member 'depth'
// Member 'fx'
// Member 'fy'
// Member 'cx'
// Member 'cy'
// Member 'width'
// Member 'height'
// Member 'baseline'
// Member 'laser_scan'
// Member 'user_data'
// Member 'grid_ground'
// Member 'grid_obstacles'
// Member 'grid_empty_cells'
// Member 'word_id_keys'
// Member 'word_id_values'
// Member 'word_descriptors'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'local_transform'
// Member 'laser_scan_local_transform'
#include "geometry_msgs/msg/detail/transform__struct.h"
// Member 'grid_view_point'
// Member 'word_pts'
#include "rtabmap_msgs/msg/detail/point3f__struct.h"
// Member 'word_kpts'
#include "rtabmap_msgs/msg/detail/key_point__struct.h"
// Member 'global_descriptors'
#include "rtabmap_msgs/msg/detail/global_descriptor__struct.h"
// Member 'env_sensors'
#include "rtabmap_msgs/msg/detail/env_sensor__struct.h"

// Struct defined in msg/NodeData in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__NodeData
{
  int32_t id;
  int32_t map_id;
  int32_t weight;
  double stamp;
  rosidl_runtime_c__String label;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Pose ground_truth_pose;
  rtabmap_msgs__msg__GPS gps;
  rosidl_runtime_c__uint8__Sequence image;
  rosidl_runtime_c__uint8__Sequence depth;
  rosidl_runtime_c__float__Sequence fx;
  rosidl_runtime_c__float__Sequence fy;
  rosidl_runtime_c__float__Sequence cx;
  rosidl_runtime_c__float__Sequence cy;
  rosidl_runtime_c__float__Sequence width;
  rosidl_runtime_c__float__Sequence height;
  rosidl_runtime_c__float__Sequence baseline;
  geometry_msgs__msg__Transform__Sequence local_transform;
  rosidl_runtime_c__uint8__Sequence laser_scan;
  int32_t laser_scan_max_pts;
  float laser_scan_max_range;
  int32_t laser_scan_format;
  geometry_msgs__msg__Transform laser_scan_local_transform;
  rosidl_runtime_c__uint8__Sequence user_data;
  rosidl_runtime_c__uint8__Sequence grid_ground;
  rosidl_runtime_c__uint8__Sequence grid_obstacles;
  rosidl_runtime_c__uint8__Sequence grid_empty_cells;
  float grid_cell_size;
  rtabmap_msgs__msg__Point3f grid_view_point;
  rosidl_runtime_c__int32__Sequence word_id_keys;
  rosidl_runtime_c__int32__Sequence word_id_values;
  rtabmap_msgs__msg__KeyPoint__Sequence word_kpts;
  rtabmap_msgs__msg__Point3f__Sequence word_pts;
  rosidl_runtime_c__uint8__Sequence word_descriptors;
  rtabmap_msgs__msg__GlobalDescriptor__Sequence global_descriptors;
  rtabmap_msgs__msg__EnvSensor__Sequence env_sensors;
} rtabmap_msgs__msg__NodeData;

// Struct for a sequence of rtabmap_msgs__msg__NodeData.
typedef struct rtabmap_msgs__msg__NodeData__Sequence
{
  rtabmap_msgs__msg__NodeData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__NodeData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__STRUCT_H_
