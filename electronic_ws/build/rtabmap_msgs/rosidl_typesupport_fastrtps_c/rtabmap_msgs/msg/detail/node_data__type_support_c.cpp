// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_msgs:msg/NodeData.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/node_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/msg/detail/node_data__struct.h"
#include "rtabmap_msgs/msg/detail/node_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // ground_truth_pose, pose
#include "geometry_msgs/msg/detail/transform__functions.h"  // laser_scan_local_transform, local_transform
#include "rosidl_runtime_c/primitives_sequence.h"  // baseline, cx, cy, depth, fx, fy, grid_empty_cells, grid_ground, grid_obstacles, height, image, laser_scan, user_data, width, word_descriptors, word_id_keys, word_id_values
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // baseline, cx, cy, depth, fx, fy, grid_empty_cells, grid_ground, grid_obstacles, height, image, laser_scan, user_data, width, word_descriptors, word_id_keys, word_id_values
#include "rosidl_runtime_c/string.h"  // label
#include "rosidl_runtime_c/string_functions.h"  // label
#include "rtabmap_msgs/msg/detail/env_sensor__functions.h"  // env_sensors
#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"  // global_descriptors
#include "rtabmap_msgs/msg/detail/gps__functions.h"  // gps
#include "rtabmap_msgs/msg/detail/key_point__functions.h"  // word_kpts
#include "rtabmap_msgs/msg/detail/point3f__functions.h"  // grid_view_point, word_pts

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t get_serialized_size_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
size_t max_serialized_size_geometry_msgs__msg__Transform(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform)();
size_t get_serialized_size_rtabmap_msgs__msg__EnvSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__EnvSensor(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, EnvSensor)();
size_t get_serialized_size_rtabmap_msgs__msg__GPS(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__GPS(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, GPS)();
size_t get_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, GlobalDescriptor)();
size_t get_serialized_size_rtabmap_msgs__msg__KeyPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__KeyPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, KeyPoint)();
size_t get_serialized_size_rtabmap_msgs__msg__Point3f(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__Point3f(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point3f)();


using _NodeData__ros_msg_type = rtabmap_msgs__msg__NodeData;

static bool _NodeData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeData__ros_msg_type * ros_message = static_cast<const _NodeData__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: map_id
  {
    cdr << ros_message->map_id;
  }

  // Field name: weight
  {
    cdr << ros_message->weight;
  }

  // Field name: stamp
  {
    cdr << ros_message->stamp;
  }

  // Field name: label
  {
    const rosidl_runtime_c__String * str = &ros_message->label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose, cdr))
    {
      return false;
    }
  }

  // Field name: ground_truth_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ground_truth_pose, cdr))
    {
      return false;
    }
  }

  // Field name: gps
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, GPS
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gps, cdr))
    {
      return false;
    }
  }

  // Field name: image
  {
    size_t size = ros_message->image.size;
    auto array_ptr = ros_message->image.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: depth
  {
    size_t size = ros_message->depth.size;
    auto array_ptr = ros_message->depth.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fx
  {
    size_t size = ros_message->fx.size;
    auto array_ptr = ros_message->fx.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fy
  {
    size_t size = ros_message->fy.size;
    auto array_ptr = ros_message->fy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cx
  {
    size_t size = ros_message->cx.size;
    auto array_ptr = ros_message->cx.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cy
  {
    size_t size = ros_message->cy.size;
    auto array_ptr = ros_message->cy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: width
  {
    size_t size = ros_message->width.size;
    auto array_ptr = ros_message->width.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: height
  {
    size_t size = ros_message->height.size;
    auto array_ptr = ros_message->height.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: baseline
  {
    size_t size = ros_message->baseline.size;
    auto array_ptr = ros_message->baseline.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: local_transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    size_t size = ros_message->local_transform.size;
    auto array_ptr = ros_message->local_transform.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: laser_scan
  {
    size_t size = ros_message->laser_scan.size;
    auto array_ptr = ros_message->laser_scan.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: laser_scan_max_pts
  {
    cdr << ros_message->laser_scan_max_pts;
  }

  // Field name: laser_scan_max_range
  {
    cdr << ros_message->laser_scan_max_range;
  }

  // Field name: laser_scan_format
  {
    cdr << ros_message->laser_scan_format;
  }

  // Field name: laser_scan_local_transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->laser_scan_local_transform, cdr))
    {
      return false;
    }
  }

  // Field name: user_data
  {
    size_t size = ros_message->user_data.size;
    auto array_ptr = ros_message->user_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: grid_ground
  {
    size_t size = ros_message->grid_ground.size;
    auto array_ptr = ros_message->grid_ground.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: grid_obstacles
  {
    size_t size = ros_message->grid_obstacles.size;
    auto array_ptr = ros_message->grid_obstacles.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: grid_empty_cells
  {
    size_t size = ros_message->grid_empty_cells.size;
    auto array_ptr = ros_message->grid_empty_cells.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: grid_cell_size
  {
    cdr << ros_message->grid_cell_size;
  }

  // Field name: grid_view_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point3f
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->grid_view_point, cdr))
    {
      return false;
    }
  }

  // Field name: word_id_keys
  {
    size_t size = ros_message->word_id_keys.size;
    auto array_ptr = ros_message->word_id_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: word_id_values
  {
    size_t size = ros_message->word_id_values.size;
    auto array_ptr = ros_message->word_id_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: word_kpts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, KeyPoint
      )()->data);
    size_t size = ros_message->word_kpts.size;
    auto array_ptr = ros_message->word_kpts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: word_pts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point3f
      )()->data);
    size_t size = ros_message->word_pts.size;
    auto array_ptr = ros_message->word_pts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: word_descriptors
  {
    size_t size = ros_message->word_descriptors.size;
    auto array_ptr = ros_message->word_descriptors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: global_descriptors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, GlobalDescriptor
      )()->data);
    size_t size = ros_message->global_descriptors.size;
    auto array_ptr = ros_message->global_descriptors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: env_sensors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, EnvSensor
      )()->data);
    size_t size = ros_message->env_sensors.size;
    auto array_ptr = ros_message->env_sensors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _NodeData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeData__ros_msg_type * ros_message = static_cast<_NodeData__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: map_id
  {
    cdr >> ros_message->map_id;
  }

  // Field name: weight
  {
    cdr >> ros_message->weight;
  }

  // Field name: stamp
  {
    cdr >> ros_message->stamp;
  }

  // Field name: label
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->label.data) {
      rosidl_runtime_c__String__init(&ros_message->label);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->label,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'label'\n");
      return false;
    }
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose))
    {
      return false;
    }
  }

  // Field name: ground_truth_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ground_truth_pose))
    {
      return false;
    }
  }

  // Field name: gps
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, GPS
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gps))
    {
      return false;
    }
  }

  // Field name: image
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->image.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->image);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->image, size)) {
      return "failed to create array for field 'image'";
    }
    auto array_ptr = ros_message->image.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: depth
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->depth.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->depth);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->depth, size)) {
      return "failed to create array for field 'depth'";
    }
    auto array_ptr = ros_message->depth.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fx
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->fx.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->fx);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->fx, size)) {
      return "failed to create array for field 'fx'";
    }
    auto array_ptr = ros_message->fx.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fy
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->fy.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->fy);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->fy, size)) {
      return "failed to create array for field 'fy'";
    }
    auto array_ptr = ros_message->fy.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cx
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cx.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->cx);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->cx, size)) {
      return "failed to create array for field 'cx'";
    }
    auto array_ptr = ros_message->cx.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cy
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cy.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->cy);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->cy, size)) {
      return "failed to create array for field 'cy'";
    }
    auto array_ptr = ros_message->cy.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: width
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->width.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->width);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->width, size)) {
      return "failed to create array for field 'width'";
    }
    auto array_ptr = ros_message->width.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: height
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->height.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->height);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->height, size)) {
      return "failed to create array for field 'height'";
    }
    auto array_ptr = ros_message->height.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: baseline
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->baseline.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->baseline);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->baseline, size)) {
      return "failed to create array for field 'baseline'";
    }
    auto array_ptr = ros_message->baseline.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: local_transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_transform.data) {
      geometry_msgs__msg__Transform__Sequence__fini(&ros_message->local_transform);
    }
    if (!geometry_msgs__msg__Transform__Sequence__init(&ros_message->local_transform, size)) {
      return "failed to create array for field 'local_transform'";
    }
    auto array_ptr = ros_message->local_transform.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: laser_scan
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->laser_scan.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->laser_scan);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->laser_scan, size)) {
      return "failed to create array for field 'laser_scan'";
    }
    auto array_ptr = ros_message->laser_scan.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: laser_scan_max_pts
  {
    cdr >> ros_message->laser_scan_max_pts;
  }

  // Field name: laser_scan_max_range
  {
    cdr >> ros_message->laser_scan_max_range;
  }

  // Field name: laser_scan_format
  {
    cdr >> ros_message->laser_scan_format;
  }

  // Field name: laser_scan_local_transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->laser_scan_local_transform))
    {
      return false;
    }
  }

  // Field name: user_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->user_data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->user_data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->user_data, size)) {
      return "failed to create array for field 'user_data'";
    }
    auto array_ptr = ros_message->user_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: grid_ground
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->grid_ground.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->grid_ground);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->grid_ground, size)) {
      return "failed to create array for field 'grid_ground'";
    }
    auto array_ptr = ros_message->grid_ground.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: grid_obstacles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->grid_obstacles.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->grid_obstacles);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->grid_obstacles, size)) {
      return "failed to create array for field 'grid_obstacles'";
    }
    auto array_ptr = ros_message->grid_obstacles.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: grid_empty_cells
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->grid_empty_cells.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->grid_empty_cells);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->grid_empty_cells, size)) {
      return "failed to create array for field 'grid_empty_cells'";
    }
    auto array_ptr = ros_message->grid_empty_cells.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: grid_cell_size
  {
    cdr >> ros_message->grid_cell_size;
  }

  // Field name: grid_view_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point3f
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->grid_view_point))
    {
      return false;
    }
  }

  // Field name: word_id_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_id_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->word_id_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->word_id_keys, size)) {
      return "failed to create array for field 'word_id_keys'";
    }
    auto array_ptr = ros_message->word_id_keys.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: word_id_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_id_values.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->word_id_values);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->word_id_values, size)) {
      return "failed to create array for field 'word_id_values'";
    }
    auto array_ptr = ros_message->word_id_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: word_kpts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, KeyPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_kpts.data) {
      rtabmap_msgs__msg__KeyPoint__Sequence__fini(&ros_message->word_kpts);
    }
    if (!rtabmap_msgs__msg__KeyPoint__Sequence__init(&ros_message->word_kpts, size)) {
      return "failed to create array for field 'word_kpts'";
    }
    auto array_ptr = ros_message->word_kpts.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: word_pts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point3f
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_pts.data) {
      rtabmap_msgs__msg__Point3f__Sequence__fini(&ros_message->word_pts);
    }
    if (!rtabmap_msgs__msg__Point3f__Sequence__init(&ros_message->word_pts, size)) {
      return "failed to create array for field 'word_pts'";
    }
    auto array_ptr = ros_message->word_pts.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: word_descriptors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_descriptors.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->word_descriptors);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->word_descriptors, size)) {
      return "failed to create array for field 'word_descriptors'";
    }
    auto array_ptr = ros_message->word_descriptors.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: global_descriptors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, GlobalDescriptor
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->global_descriptors.data) {
      rtabmap_msgs__msg__GlobalDescriptor__Sequence__fini(&ros_message->global_descriptors);
    }
    if (!rtabmap_msgs__msg__GlobalDescriptor__Sequence__init(&ros_message->global_descriptors, size)) {
      return "failed to create array for field 'global_descriptors'";
    }
    auto array_ptr = ros_message->global_descriptors.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: env_sensors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, EnvSensor
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->env_sensors.data) {
      rtabmap_msgs__msg__EnvSensor__Sequence__fini(&ros_message->env_sensors);
    }
    if (!rtabmap_msgs__msg__EnvSensor__Sequence__init(&ros_message->env_sensors, size)) {
      return "failed to create array for field 'env_sensors'";
    }
    auto array_ptr = ros_message->env_sensors.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__msg__NodeData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeData__ros_msg_type * ros_message = static_cast<const _NodeData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name map_id
  {
    size_t item_size = sizeof(ros_message->map_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name weight
  {
    size_t item_size = sizeof(ros_message->weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp
  {
    size_t item_size = sizeof(ros_message->stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->label.size + 1);
  // field.name pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);
  // field.name ground_truth_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->ground_truth_pose), current_alignment);
  // field.name gps

  current_alignment += get_serialized_size_rtabmap_msgs__msg__GPS(
    &(ros_message->gps), current_alignment);
  // field.name image
  {
    size_t array_size = ros_message->image.size;
    auto array_ptr = ros_message->image.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name depth
  {
    size_t array_size = ros_message->depth.size;
    auto array_ptr = ros_message->depth.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fx
  {
    size_t array_size = ros_message->fx.size;
    auto array_ptr = ros_message->fx.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fy
  {
    size_t array_size = ros_message->fy.size;
    auto array_ptr = ros_message->fy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cx
  {
    size_t array_size = ros_message->cx.size;
    auto array_ptr = ros_message->cx.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cy
  {
    size_t array_size = ros_message->cy.size;
    auto array_ptr = ros_message->cy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t array_size = ros_message->width.size;
    auto array_ptr = ros_message->width.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t array_size = ros_message->height.size;
    auto array_ptr = ros_message->height.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baseline
  {
    size_t array_size = ros_message->baseline.size;
    auto array_ptr = ros_message->baseline.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_transform
  {
    size_t array_size = ros_message->local_transform.size;
    auto array_ptr = ros_message->local_transform.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name laser_scan
  {
    size_t array_size = ros_message->laser_scan.size;
    auto array_ptr = ros_message->laser_scan.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_scan_max_pts
  {
    size_t item_size = sizeof(ros_message->laser_scan_max_pts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_scan_max_range
  {
    size_t item_size = sizeof(ros_message->laser_scan_max_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_scan_format
  {
    size_t item_size = sizeof(ros_message->laser_scan_format);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_scan_local_transform

  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->laser_scan_local_transform), current_alignment);
  // field.name user_data
  {
    size_t array_size = ros_message->user_data.size;
    auto array_ptr = ros_message->user_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grid_ground
  {
    size_t array_size = ros_message->grid_ground.size;
    auto array_ptr = ros_message->grid_ground.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grid_obstacles
  {
    size_t array_size = ros_message->grid_obstacles.size;
    auto array_ptr = ros_message->grid_obstacles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grid_empty_cells
  {
    size_t array_size = ros_message->grid_empty_cells.size;
    auto array_ptr = ros_message->grid_empty_cells.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grid_cell_size
  {
    size_t item_size = sizeof(ros_message->grid_cell_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grid_view_point

  current_alignment += get_serialized_size_rtabmap_msgs__msg__Point3f(
    &(ros_message->grid_view_point), current_alignment);
  // field.name word_id_keys
  {
    size_t array_size = ros_message->word_id_keys.size;
    auto array_ptr = ros_message->word_id_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name word_id_values
  {
    size_t array_size = ros_message->word_id_values.size;
    auto array_ptr = ros_message->word_id_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name word_kpts
  {
    size_t array_size = ros_message->word_kpts.size;
    auto array_ptr = ros_message->word_kpts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__KeyPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name word_pts
  {
    size_t array_size = ros_message->word_pts.size;
    auto array_ptr = ros_message->word_pts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__Point3f(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name word_descriptors
  {
    size_t array_size = ros_message->word_descriptors.size;
    auto array_ptr = ros_message->word_descriptors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_descriptors
  {
    size_t array_size = ros_message->global_descriptors.size;
    auto array_ptr = ros_message->global_descriptors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name env_sensors
  {
    size_t array_size = ros_message->env_sensors.size;
    auto array_ptr = ros_message->env_sensors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_msgs__msg__EnvSensor(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NodeData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__msg__NodeData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__msg__NodeData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: map_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: weight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }
  // member: ground_truth_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }
  // member: gps
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_msgs__msg__GPS(
        full_bounded, current_alignment);
    }
  }
  // member: image
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: depth
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fx
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fy
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cx
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cy
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: width
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baseline
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_transform
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }
  // member: laser_scan
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: laser_scan_max_pts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: laser_scan_max_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: laser_scan_format
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: laser_scan_local_transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }
  // member: user_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: grid_ground
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: grid_obstacles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: grid_empty_cells
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: grid_cell_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: grid_view_point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_msgs__msg__Point3f(
        full_bounded, current_alignment);
    }
  }
  // member: word_id_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: word_id_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: word_kpts
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_msgs__msg__KeyPoint(
        full_bounded, current_alignment);
    }
  }
  // member: word_pts
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_msgs__msg__Point3f(
        full_bounded, current_alignment);
    }
  }
  // member: word_descriptors
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: global_descriptors
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_msgs__msg__GlobalDescriptor(
        full_bounded, current_alignment);
    }
  }
  // member: env_sensors
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_msgs__msg__EnvSensor(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_msgs__msg__NodeData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeData = {
  "rtabmap_msgs::msg",
  "NodeData",
  _NodeData__cdr_serialize,
  _NodeData__cdr_deserialize,
  _NodeData__get_serialized_size,
  _NodeData__max_serialized_size
};

static rosidl_message_type_support_t _NodeData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, NodeData)() {
  return &_NodeData__type_support;
}

#if defined(__cplusplus)
}
#endif
