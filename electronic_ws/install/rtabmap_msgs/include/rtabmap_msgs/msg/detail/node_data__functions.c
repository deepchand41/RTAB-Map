// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:msg/NodeData.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/node_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
// Member `ground_truth_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `gps`
#include "rtabmap_msgs/msg/detail/gps__functions.h"
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
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `grid_view_point`
// Member `word_pts`
#include "rtabmap_msgs/msg/detail/point3f__functions.h"
// Member `word_kpts`
#include "rtabmap_msgs/msg/detail/key_point__functions.h"
// Member `global_descriptors`
#include "rtabmap_msgs/msg/detail/global_descriptor__functions.h"
// Member `env_sensors`
#include "rtabmap_msgs/msg/detail/env_sensor__functions.h"

bool
rtabmap_msgs__msg__NodeData__init(rtabmap_msgs__msg__NodeData * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // map_id
  // weight
  // stamp
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // ground_truth_pose
  if (!geometry_msgs__msg__Pose__init(&msg->ground_truth_pose)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // gps
  if (!rtabmap_msgs__msg__GPS__init(&msg->gps)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // image
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->image, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // depth
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->depth, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // fx
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fx, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // fy
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fy, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // cx
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cx, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // cy
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cy, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // width
  if (!rosidl_runtime_c__float__Sequence__init(&msg->width, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // height
  if (!rosidl_runtime_c__float__Sequence__init(&msg->height, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // baseline
  if (!rosidl_runtime_c__float__Sequence__init(&msg->baseline, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // local_transform
  if (!geometry_msgs__msg__Transform__Sequence__init(&msg->local_transform, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // laser_scan
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->laser_scan, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // laser_scan_max_pts
  // laser_scan_max_range
  // laser_scan_format
  // laser_scan_local_transform
  if (!geometry_msgs__msg__Transform__init(&msg->laser_scan_local_transform)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // user_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->user_data, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // grid_ground
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->grid_ground, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // grid_obstacles
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->grid_obstacles, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // grid_empty_cells
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->grid_empty_cells, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // grid_cell_size
  // grid_view_point
  if (!rtabmap_msgs__msg__Point3f__init(&msg->grid_view_point)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // word_id_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_id_keys, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // word_id_values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_id_values, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // word_kpts
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__init(&msg->word_kpts, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // word_pts
  if (!rtabmap_msgs__msg__Point3f__Sequence__init(&msg->word_pts, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // word_descriptors
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->word_descriptors, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // global_descriptors
  if (!rtabmap_msgs__msg__GlobalDescriptor__Sequence__init(&msg->global_descriptors, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  // env_sensors
  if (!rtabmap_msgs__msg__EnvSensor__Sequence__init(&msg->env_sensors, 0)) {
    rtabmap_msgs__msg__NodeData__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_msgs__msg__NodeData__fini(rtabmap_msgs__msg__NodeData * msg)
{
  if (!msg) {
    return;
  }
  // id
  // map_id
  // weight
  // stamp
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // ground_truth_pose
  geometry_msgs__msg__Pose__fini(&msg->ground_truth_pose);
  // gps
  rtabmap_msgs__msg__GPS__fini(&msg->gps);
  // image
  rosidl_runtime_c__uint8__Sequence__fini(&msg->image);
  // depth
  rosidl_runtime_c__uint8__Sequence__fini(&msg->depth);
  // fx
  rosidl_runtime_c__float__Sequence__fini(&msg->fx);
  // fy
  rosidl_runtime_c__float__Sequence__fini(&msg->fy);
  // cx
  rosidl_runtime_c__float__Sequence__fini(&msg->cx);
  // cy
  rosidl_runtime_c__float__Sequence__fini(&msg->cy);
  // width
  rosidl_runtime_c__float__Sequence__fini(&msg->width);
  // height
  rosidl_runtime_c__float__Sequence__fini(&msg->height);
  // baseline
  rosidl_runtime_c__float__Sequence__fini(&msg->baseline);
  // local_transform
  geometry_msgs__msg__Transform__Sequence__fini(&msg->local_transform);
  // laser_scan
  rosidl_runtime_c__uint8__Sequence__fini(&msg->laser_scan);
  // laser_scan_max_pts
  // laser_scan_max_range
  // laser_scan_format
  // laser_scan_local_transform
  geometry_msgs__msg__Transform__fini(&msg->laser_scan_local_transform);
  // user_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->user_data);
  // grid_ground
  rosidl_runtime_c__uint8__Sequence__fini(&msg->grid_ground);
  // grid_obstacles
  rosidl_runtime_c__uint8__Sequence__fini(&msg->grid_obstacles);
  // grid_empty_cells
  rosidl_runtime_c__uint8__Sequence__fini(&msg->grid_empty_cells);
  // grid_cell_size
  // grid_view_point
  rtabmap_msgs__msg__Point3f__fini(&msg->grid_view_point);
  // word_id_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_id_keys);
  // word_id_values
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_id_values);
  // word_kpts
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(&msg->word_kpts);
  // word_pts
  rtabmap_msgs__msg__Point3f__Sequence__fini(&msg->word_pts);
  // word_descriptors
  rosidl_runtime_c__uint8__Sequence__fini(&msg->word_descriptors);
  // global_descriptors
  rtabmap_msgs__msg__GlobalDescriptor__Sequence__fini(&msg->global_descriptors);
  // env_sensors
  rtabmap_msgs__msg__EnvSensor__Sequence__fini(&msg->env_sensors);
}

bool
rtabmap_msgs__msg__NodeData__are_equal(const rtabmap_msgs__msg__NodeData * lhs, const rtabmap_msgs__msg__NodeData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // map_id
  if (lhs->map_id != rhs->map_id) {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  // stamp
  if (lhs->stamp != rhs->stamp) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // ground_truth_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->ground_truth_pose), &(rhs->ground_truth_pose)))
  {
    return false;
  }
  // gps
  if (!rtabmap_msgs__msg__GPS__are_equal(
      &(lhs->gps), &(rhs->gps)))
  {
    return false;
  }
  // image
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // depth
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->depth), &(rhs->depth)))
  {
    return false;
  }
  // fx
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->fx), &(rhs->fx)))
  {
    return false;
  }
  // fy
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->fy), &(rhs->fy)))
  {
    return false;
  }
  // cx
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->cx), &(rhs->cx)))
  {
    return false;
  }
  // cy
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->cy), &(rhs->cy)))
  {
    return false;
  }
  // width
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->width), &(rhs->width)))
  {
    return false;
  }
  // height
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->height), &(rhs->height)))
  {
    return false;
  }
  // baseline
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->baseline), &(rhs->baseline)))
  {
    return false;
  }
  // local_transform
  if (!geometry_msgs__msg__Transform__Sequence__are_equal(
      &(lhs->local_transform), &(rhs->local_transform)))
  {
    return false;
  }
  // laser_scan
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->laser_scan), &(rhs->laser_scan)))
  {
    return false;
  }
  // laser_scan_max_pts
  if (lhs->laser_scan_max_pts != rhs->laser_scan_max_pts) {
    return false;
  }
  // laser_scan_max_range
  if (lhs->laser_scan_max_range != rhs->laser_scan_max_range) {
    return false;
  }
  // laser_scan_format
  if (lhs->laser_scan_format != rhs->laser_scan_format) {
    return false;
  }
  // laser_scan_local_transform
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->laser_scan_local_transform), &(rhs->laser_scan_local_transform)))
  {
    return false;
  }
  // user_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->user_data), &(rhs->user_data)))
  {
    return false;
  }
  // grid_ground
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->grid_ground), &(rhs->grid_ground)))
  {
    return false;
  }
  // grid_obstacles
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->grid_obstacles), &(rhs->grid_obstacles)))
  {
    return false;
  }
  // grid_empty_cells
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->grid_empty_cells), &(rhs->grid_empty_cells)))
  {
    return false;
  }
  // grid_cell_size
  if (lhs->grid_cell_size != rhs->grid_cell_size) {
    return false;
  }
  // grid_view_point
  if (!rtabmap_msgs__msg__Point3f__are_equal(
      &(lhs->grid_view_point), &(rhs->grid_view_point)))
  {
    return false;
  }
  // word_id_keys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->word_id_keys), &(rhs->word_id_keys)))
  {
    return false;
  }
  // word_id_values
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->word_id_values), &(rhs->word_id_values)))
  {
    return false;
  }
  // word_kpts
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__are_equal(
      &(lhs->word_kpts), &(rhs->word_kpts)))
  {
    return false;
  }
  // word_pts
  if (!rtabmap_msgs__msg__Point3f__Sequence__are_equal(
      &(lhs->word_pts), &(rhs->word_pts)))
  {
    return false;
  }
  // word_descriptors
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->word_descriptors), &(rhs->word_descriptors)))
  {
    return false;
  }
  // global_descriptors
  if (!rtabmap_msgs__msg__GlobalDescriptor__Sequence__are_equal(
      &(lhs->global_descriptors), &(rhs->global_descriptors)))
  {
    return false;
  }
  // env_sensors
  if (!rtabmap_msgs__msg__EnvSensor__Sequence__are_equal(
      &(lhs->env_sensors), &(rhs->env_sensors)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__msg__NodeData__copy(
  const rtabmap_msgs__msg__NodeData * input,
  rtabmap_msgs__msg__NodeData * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // map_id
  output->map_id = input->map_id;
  // weight
  output->weight = input->weight;
  // stamp
  output->stamp = input->stamp;
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // ground_truth_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->ground_truth_pose), &(output->ground_truth_pose)))
  {
    return false;
  }
  // gps
  if (!rtabmap_msgs__msg__GPS__copy(
      &(input->gps), &(output->gps)))
  {
    return false;
  }
  // image
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // depth
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->depth), &(output->depth)))
  {
    return false;
  }
  // fx
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->fx), &(output->fx)))
  {
    return false;
  }
  // fy
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->fy), &(output->fy)))
  {
    return false;
  }
  // cx
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->cx), &(output->cx)))
  {
    return false;
  }
  // cy
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->cy), &(output->cy)))
  {
    return false;
  }
  // width
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->width), &(output->width)))
  {
    return false;
  }
  // height
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->height), &(output->height)))
  {
    return false;
  }
  // baseline
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->baseline), &(output->baseline)))
  {
    return false;
  }
  // local_transform
  if (!geometry_msgs__msg__Transform__Sequence__copy(
      &(input->local_transform), &(output->local_transform)))
  {
    return false;
  }
  // laser_scan
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->laser_scan), &(output->laser_scan)))
  {
    return false;
  }
  // laser_scan_max_pts
  output->laser_scan_max_pts = input->laser_scan_max_pts;
  // laser_scan_max_range
  output->laser_scan_max_range = input->laser_scan_max_range;
  // laser_scan_format
  output->laser_scan_format = input->laser_scan_format;
  // laser_scan_local_transform
  if (!geometry_msgs__msg__Transform__copy(
      &(input->laser_scan_local_transform), &(output->laser_scan_local_transform)))
  {
    return false;
  }
  // user_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->user_data), &(output->user_data)))
  {
    return false;
  }
  // grid_ground
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->grid_ground), &(output->grid_ground)))
  {
    return false;
  }
  // grid_obstacles
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->grid_obstacles), &(output->grid_obstacles)))
  {
    return false;
  }
  // grid_empty_cells
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->grid_empty_cells), &(output->grid_empty_cells)))
  {
    return false;
  }
  // grid_cell_size
  output->grid_cell_size = input->grid_cell_size;
  // grid_view_point
  if (!rtabmap_msgs__msg__Point3f__copy(
      &(input->grid_view_point), &(output->grid_view_point)))
  {
    return false;
  }
  // word_id_keys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->word_id_keys), &(output->word_id_keys)))
  {
    return false;
  }
  // word_id_values
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->word_id_values), &(output->word_id_values)))
  {
    return false;
  }
  // word_kpts
  if (!rtabmap_msgs__msg__KeyPoint__Sequence__copy(
      &(input->word_kpts), &(output->word_kpts)))
  {
    return false;
  }
  // word_pts
  if (!rtabmap_msgs__msg__Point3f__Sequence__copy(
      &(input->word_pts), &(output->word_pts)))
  {
    return false;
  }
  // word_descriptors
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->word_descriptors), &(output->word_descriptors)))
  {
    return false;
  }
  // global_descriptors
  if (!rtabmap_msgs__msg__GlobalDescriptor__Sequence__copy(
      &(input->global_descriptors), &(output->global_descriptors)))
  {
    return false;
  }
  // env_sensors
  if (!rtabmap_msgs__msg__EnvSensor__Sequence__copy(
      &(input->env_sensors), &(output->env_sensors)))
  {
    return false;
  }
  return true;
}

rtabmap_msgs__msg__NodeData *
rtabmap_msgs__msg__NodeData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__NodeData * msg = (rtabmap_msgs__msg__NodeData *)allocator.allocate(sizeof(rtabmap_msgs__msg__NodeData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__msg__NodeData));
  bool success = rtabmap_msgs__msg__NodeData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__msg__NodeData__destroy(rtabmap_msgs__msg__NodeData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__msg__NodeData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__msg__NodeData__Sequence__init(rtabmap_msgs__msg__NodeData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__NodeData * data = NULL;

  if (size) {
    data = (rtabmap_msgs__msg__NodeData *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__msg__NodeData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__msg__NodeData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__msg__NodeData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rtabmap_msgs__msg__NodeData__Sequence__fini(rtabmap_msgs__msg__NodeData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_msgs__msg__NodeData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rtabmap_msgs__msg__NodeData__Sequence *
rtabmap_msgs__msg__NodeData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__msg__NodeData__Sequence * array = (rtabmap_msgs__msg__NodeData__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__msg__NodeData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__msg__NodeData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__msg__NodeData__Sequence__destroy(rtabmap_msgs__msg__NodeData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__msg__NodeData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__msg__NodeData__Sequence__are_equal(const rtabmap_msgs__msg__NodeData__Sequence * lhs, const rtabmap_msgs__msg__NodeData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__msg__NodeData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__msg__NodeData__Sequence__copy(
  const rtabmap_msgs__msg__NodeData__Sequence * input,
  rtabmap_msgs__msg__NodeData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__msg__NodeData);
    rtabmap_msgs__msg__NodeData * data =
      (rtabmap_msgs__msg__NodeData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__msg__NodeData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__msg__NodeData__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__msg__NodeData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
