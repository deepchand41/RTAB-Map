// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:srv/TailRemoval.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__TAIL_REMOVAL__TRAITS_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__TAIL_REMOVAL__TRAITS_HPP_

#include "lslidar_msgs/srv/detail/tail_removal__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::TailRemoval_Request>()
{
  return "lslidar_msgs::srv::TailRemoval_Request";
}

template<>
inline const char * name<lslidar_msgs::srv::TailRemoval_Request>()
{
  return "lslidar_msgs/srv/TailRemoval_Request";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::TailRemoval_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::TailRemoval_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::TailRemoval_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::TailRemoval_Response>()
{
  return "lslidar_msgs::srv::TailRemoval_Response";
}

template<>
inline const char * name<lslidar_msgs::srv::TailRemoval_Response>()
{
  return "lslidar_msgs/srv/TailRemoval_Response";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::TailRemoval_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::TailRemoval_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::TailRemoval_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::TailRemoval>()
{
  return "lslidar_msgs::srv::TailRemoval";
}

template<>
inline const char * name<lslidar_msgs::srv::TailRemoval>()
{
  return "lslidar_msgs/srv/TailRemoval";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::TailRemoval>
  : std::integral_constant<
    bool,
    has_fixed_size<lslidar_msgs::srv::TailRemoval_Request>::value &&
    has_fixed_size<lslidar_msgs::srv::TailRemoval_Response>::value
  >
{
};

template<>
struct has_bounded_size<lslidar_msgs::srv::TailRemoval>
  : std::integral_constant<
    bool,
    has_bounded_size<lslidar_msgs::srv::TailRemoval_Request>::value &&
    has_bounded_size<lslidar_msgs::srv::TailRemoval_Response>::value
  >
{
};

template<>
struct is_service<lslidar_msgs::srv::TailRemoval>
  : std::true_type
{
};

template<>
struct is_service_request<lslidar_msgs::srv::TailRemoval_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lslidar_msgs::srv::TailRemoval_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__SRV__DETAIL__TAIL_REMOVAL__TRAITS_HPP_
