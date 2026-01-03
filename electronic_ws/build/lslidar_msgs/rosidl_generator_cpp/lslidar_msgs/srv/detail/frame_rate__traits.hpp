// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:srv/FrameRate.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__TRAITS_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__TRAITS_HPP_

#include "lslidar_msgs/srv/detail/frame_rate__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::FrameRate_Request>()
{
  return "lslidar_msgs::srv::FrameRate_Request";
}

template<>
inline const char * name<lslidar_msgs::srv::FrameRate_Request>()
{
  return "lslidar_msgs/srv/FrameRate_Request";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::FrameRate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::FrameRate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::FrameRate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::FrameRate_Response>()
{
  return "lslidar_msgs::srv::FrameRate_Response";
}

template<>
inline const char * name<lslidar_msgs::srv::FrameRate_Response>()
{
  return "lslidar_msgs/srv/FrameRate_Response";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::FrameRate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::FrameRate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::FrameRate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::FrameRate>()
{
  return "lslidar_msgs::srv::FrameRate";
}

template<>
inline const char * name<lslidar_msgs::srv::FrameRate>()
{
  return "lslidar_msgs/srv/FrameRate";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::FrameRate>
  : std::integral_constant<
    bool,
    has_fixed_size<lslidar_msgs::srv::FrameRate_Request>::value &&
    has_fixed_size<lslidar_msgs::srv::FrameRate_Response>::value
  >
{
};

template<>
struct has_bounded_size<lslidar_msgs::srv::FrameRate>
  : std::integral_constant<
    bool,
    has_bounded_size<lslidar_msgs::srv::FrameRate_Request>::value &&
    has_bounded_size<lslidar_msgs::srv::FrameRate_Response>::value
  >
{
};

template<>
struct is_service<lslidar_msgs::srv::FrameRate>
  : std::true_type
{
};

template<>
struct is_service_request<lslidar_msgs::srv::FrameRate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lslidar_msgs::srv::FrameRate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__TRAITS_HPP_
