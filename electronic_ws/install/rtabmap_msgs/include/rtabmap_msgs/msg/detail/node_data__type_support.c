// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/NodeData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/node_data__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/node_data__functions.h"
#include "rtabmap_msgs/msg/detail/node_data__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
// Member `ground_truth_pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
// Member `ground_truth_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `gps`
#include "rtabmap_msgs/msg/gps.h"
// Member `gps`
#include "rtabmap_msgs/msg/detail/gps__rosidl_typesupport_introspection_c.h"
// Member `image`
// Member `depth`
// Member `fx`
// Member `fy`
// Member `cx`
// Member `cy`
// Member `width`
// Member `height`
// Member `baseline`
// Member `laser_scan`
// Member `user_data`
// Member `grid_ground`
// Member `grid_obstacles`
// Member `grid_empty_cells`
// Member `word_id_keys`
// Member `word_id_values`
// Member `word_descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `local_transform`
// Member `laser_scan_local_transform`
#include "geometry_msgs/msg/transform.h"
// Member `local_transform`
// Member `laser_scan_local_transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"
// Member `grid_view_point`
// Member `word_pts`
#include "rtabmap_msgs/msg/point3f.h"
// Member `grid_view_point`
// Member `word_pts`
#include "rtabmap_msgs/msg/detail/point3f__rosidl_typesupport_introspection_c.h"
// Member `word_kpts`
#include "rtabmap_msgs/msg/key_point.h"
// Member `word_kpts`
#include "rtabmap_msgs/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
// Member `global_descriptors`
#include "rtabmap_msgs/msg/global_descriptor.h"
// Member `global_descriptors`
#include "rtabmap_msgs/msg/detail/global_descriptor__rosidl_typesupport_introspection_c.h"
// Member `env_sensors`
#include "rtabmap_msgs/msg/env_sensor.h"
// Member `env_sensors`
#include "rtabmap_msgs/msg/detail/env_sensor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NodeData__rosidl_typesupport_introspection_c__NodeData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__NodeData__init(message_memory);
}

void NodeData__rosidl_typesupport_introspection_c__NodeData_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__NodeData__fini(message_memory);
}

size_t NodeData__rosidl_typesupport_introspection_c__size_function__Transform__local_transform(
  const void * untyped_member)
{
  const geometry_msgs__msg__Transform__Sequence * member =
    (const geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeData__rosidl_typesupport_introspection_c__get_const_function__Transform__local_transform(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Transform__Sequence * member =
    (const geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeData__rosidl_typesupport_introspection_c__get_function__Transform__local_transform(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Transform__Sequence * member =
    (geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeData__rosidl_typesupport_introspection_c__resize_function__Transform__local_transform(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Transform__Sequence * member =
    (geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  geometry_msgs__msg__Transform__Sequence__fini(member);
  return geometry_msgs__msg__Transform__Sequence__init(member, size);
}

size_t NodeData__rosidl_typesupport_introspection_c__size_function__KeyPoint__word_kpts(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeData__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__word_kpts(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeData__rosidl_typesupport_introspection_c__get_function__KeyPoint__word_kpts(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeData__rosidl_typesupport_introspection_c__resize_function__KeyPoint__word_kpts(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(member);
  return rtabmap_msgs__msg__KeyPoint__Sequence__init(member, size);
}

size_t NodeData__rosidl_typesupport_introspection_c__size_function__Point3f__word_pts(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeData__rosidl_typesupport_introspection_c__get_const_function__Point3f__word_pts(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeData__rosidl_typesupport_introspection_c__get_function__Point3f__word_pts(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeData__rosidl_typesupport_introspection_c__resize_function__Point3f__word_pts(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point3f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point3f__Sequence__init(member, size);
}

size_t NodeData__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__global_descriptors(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__GlobalDescriptor__Sequence * member =
    (const rtabmap_msgs__msg__GlobalDescriptor__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeData__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__global_descriptors(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__GlobalDescriptor__Sequence * member =
    (const rtabmap_msgs__msg__GlobalDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeData__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__global_descriptors(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__GlobalDescriptor__Sequence * member =
    (rtabmap_msgs__msg__GlobalDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeData__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__global_descriptors(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__GlobalDescriptor__Sequence * member =
    (rtabmap_msgs__msg__GlobalDescriptor__Sequence *)(untyped_member);
  rtabmap_msgs__msg__GlobalDescriptor__Sequence__fini(member);
  return rtabmap_msgs__msg__GlobalDescriptor__Sequence__init(member, size);
}

size_t NodeData__rosidl_typesupport_introspection_c__size_function__EnvSensor__env_sensors(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__EnvSensor__Sequence * member =
    (const rtabmap_msgs__msg__EnvSensor__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeData__rosidl_typesupport_introspection_c__get_const_function__EnvSensor__env_sensors(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__EnvSensor__Sequence * member =
    (const rtabmap_msgs__msg__EnvSensor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeData__rosidl_typesupport_introspection_c__get_function__EnvSensor__env_sensors(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__EnvSensor__Sequence * member =
    (rtabmap_msgs__msg__EnvSensor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeData__rosidl_typesupport_introspection_c__resize_function__EnvSensor__env_sensors(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__EnvSensor__Sequence * member =
    (rtabmap_msgs__msg__EnvSensor__Sequence *)(untyped_member);
  rtabmap_msgs__msg__EnvSensor__Sequence__fini(member);
  return rtabmap_msgs__msg__EnvSensor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[36] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, map_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ground_truth_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, ground_truth_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, gps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, fx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, fy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, cx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, cy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baseline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, baseline),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, local_transform),  // bytes offset in struct
    NULL,  // default value
    NodeData__rosidl_typesupport_introspection_c__size_function__Transform__local_transform,  // size() function pointer
    NodeData__rosidl_typesupport_introspection_c__get_const_function__Transform__local_transform,  // get_const(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__get_function__Transform__local_transform,  // get(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__resize_function__Transform__local_transform  // resize(index) function pointer
  },
  {
    "laser_scan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, laser_scan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_scan_max_pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, laser_scan_max_pts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_scan_max_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, laser_scan_max_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_scan_format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, laser_scan_format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_scan_local_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, laser_scan_local_transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, user_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_ground",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, grid_ground),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, grid_obstacles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_empty_cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, grid_empty_cells),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_cell_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, grid_cell_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_view_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, grid_view_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word_id_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, word_id_keys),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word_id_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, word_id_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word_kpts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, word_kpts),  // bytes offset in struct
    NULL,  // default value
    NodeData__rosidl_typesupport_introspection_c__size_function__KeyPoint__word_kpts,  // size() function pointer
    NodeData__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__word_kpts,  // get_const(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__get_function__KeyPoint__word_kpts,  // get(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__resize_function__KeyPoint__word_kpts  // resize(index) function pointer
  },
  {
    "word_pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, word_pts),  // bytes offset in struct
    NULL,  // default value
    NodeData__rosidl_typesupport_introspection_c__size_function__Point3f__word_pts,  // size() function pointer
    NodeData__rosidl_typesupport_introspection_c__get_const_function__Point3f__word_pts,  // get_const(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__get_function__Point3f__word_pts,  // get(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__resize_function__Point3f__word_pts  // resize(index) function pointer
  },
  {
    "word_descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, word_descriptors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, global_descriptors),  // bytes offset in struct
    NULL,  // default value
    NodeData__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__global_descriptors,  // size() function pointer
    NodeData__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__global_descriptors,  // get_const(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__global_descriptors,  // get(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__global_descriptors  // resize(index) function pointer
  },
  {
    "env_sensors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__NodeData, env_sensors),  // bytes offset in struct
    NULL,  // default value
    NodeData__rosidl_typesupport_introspection_c__size_function__EnvSensor__env_sensors,  // size() function pointer
    NodeData__rosidl_typesupport_introspection_c__get_const_function__EnvSensor__env_sensors,  // get_const(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__get_function__EnvSensor__env_sensors,  // get(index) function pointer
    NodeData__rosidl_typesupport_introspection_c__resize_function__EnvSensor__env_sensors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NodeData__rosidl_typesupport_introspection_c__NodeData_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "NodeData",  // message name
  36,  // number of fields
  sizeof(rtabmap_msgs__msg__NodeData),
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array,  // message members
  NodeData__rosidl_typesupport_introspection_c__NodeData_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeData__rosidl_typesupport_introspection_c__NodeData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NodeData__rosidl_typesupport_introspection_c__NodeData_message_type_support_handle = {
  0,
  &NodeData__rosidl_typesupport_introspection_c__NodeData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, NodeData)() {
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, GPS)();
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point3f)();
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[31].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, KeyPoint)();
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[32].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point3f)();
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[34].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, GlobalDescriptor)();
  NodeData__rosidl_typesupport_introspection_c__NodeData_message_member_array[35].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, EnvSensor)();
  if (!NodeData__rosidl_typesupport_introspection_c__NodeData_message_type_support_handle.typesupport_identifier) {
    NodeData__rosidl_typesupport_introspection_c__NodeData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NodeData__rosidl_typesupport_introspection_c__NodeData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
