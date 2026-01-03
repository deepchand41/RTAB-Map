// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/NodeData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__TRAITS_HPP_

#include "rtabmap_msgs/msg/detail/node_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
// Member 'ground_truth_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'gps'
#include "rtabmap_msgs/msg/detail/gps__traits.hpp"
// Member 'laser_scan_local_transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"
// Member 'grid_view_point'
#include "rtabmap_msgs/msg/detail/point3f__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::msg::NodeData>()
{
  return "rtabmap_msgs::msg::NodeData";
}

template<>
inline const char * name<rtabmap_msgs::msg::NodeData>()
{
  return "rtabmap_msgs/msg/NodeData";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::NodeData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::NodeData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::msg::NodeData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__TRAITS_HPP_
