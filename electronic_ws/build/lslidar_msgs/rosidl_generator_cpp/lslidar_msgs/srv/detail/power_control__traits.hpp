// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:srv/PowerControl.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__POWER_CONTROL__TRAITS_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__POWER_CONTROL__TRAITS_HPP_

#include "lslidar_msgs/srv/detail/power_control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::PowerControl_Request>()
{
  return "lslidar_msgs::srv::PowerControl_Request";
}

template<>
inline const char * name<lslidar_msgs::srv::PowerControl_Request>()
{
  return "lslidar_msgs/srv/PowerControl_Request";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::PowerControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::PowerControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::PowerControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::PowerControl_Response>()
{
  return "lslidar_msgs::srv::PowerControl_Response";
}

template<>
inline const char * name<lslidar_msgs::srv::PowerControl_Response>()
{
  return "lslidar_msgs/srv/PowerControl_Response";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::PowerControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::PowerControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::PowerControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::PowerControl>()
{
  return "lslidar_msgs::srv::PowerControl";
}

template<>
inline const char * name<lslidar_msgs::srv::PowerControl>()
{
  return "lslidar_msgs/srv/PowerControl";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::PowerControl>
  : std::integral_constant<
    bool,
    has_fixed_size<lslidar_msgs::srv::PowerControl_Request>::value &&
    has_fixed_size<lslidar_msgs::srv::PowerControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<lslidar_msgs::srv::PowerControl>
  : std::integral_constant<
    bool,
    has_bounded_size<lslidar_msgs::srv::PowerControl_Request>::value &&
    has_bounded_size<lslidar_msgs::srv::PowerControl_Response>::value
  >
{
};

template<>
struct is_service<lslidar_msgs::srv::PowerControl>
  : std::true_type
{
};

template<>
struct is_service_request<lslidar_msgs::srv::PowerControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lslidar_msgs::srv::PowerControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__SRV__DETAIL__POWER_CONTROL__TRAITS_HPP_
