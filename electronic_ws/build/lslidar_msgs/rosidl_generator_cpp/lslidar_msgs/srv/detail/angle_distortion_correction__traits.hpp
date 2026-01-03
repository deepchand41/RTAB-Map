// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:srv/AngleDistortionCorrection.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__ANGLE_DISTORTION_CORRECTION__TRAITS_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__ANGLE_DISTORTION_CORRECTION__TRAITS_HPP_

#include "lslidar_msgs/srv/detail/angle_distortion_correction__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::AngleDistortionCorrection_Request>()
{
  return "lslidar_msgs::srv::AngleDistortionCorrection_Request";
}

template<>
inline const char * name<lslidar_msgs::srv::AngleDistortionCorrection_Request>()
{
  return "lslidar_msgs/srv/AngleDistortionCorrection_Request";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::AngleDistortionCorrection_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::AngleDistortionCorrection_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::AngleDistortionCorrection_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::AngleDistortionCorrection_Response>()
{
  return "lslidar_msgs::srv::AngleDistortionCorrection_Response";
}

template<>
inline const char * name<lslidar_msgs::srv::AngleDistortionCorrection_Response>()
{
  return "lslidar_msgs/srv/AngleDistortionCorrection_Response";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::AngleDistortionCorrection_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::AngleDistortionCorrection_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::AngleDistortionCorrection_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::AngleDistortionCorrection>()
{
  return "lslidar_msgs::srv::AngleDistortionCorrection";
}

template<>
inline const char * name<lslidar_msgs::srv::AngleDistortionCorrection>()
{
  return "lslidar_msgs/srv/AngleDistortionCorrection";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::AngleDistortionCorrection>
  : std::integral_constant<
    bool,
    has_fixed_size<lslidar_msgs::srv::AngleDistortionCorrection_Request>::value &&
    has_fixed_size<lslidar_msgs::srv::AngleDistortionCorrection_Response>::value
  >
{
};

template<>
struct has_bounded_size<lslidar_msgs::srv::AngleDistortionCorrection>
  : std::integral_constant<
    bool,
    has_bounded_size<lslidar_msgs::srv::AngleDistortionCorrection_Request>::value &&
    has_bounded_size<lslidar_msgs::srv::AngleDistortionCorrection_Response>::value
  >
{
};

template<>
struct is_service<lslidar_msgs::srv::AngleDistortionCorrection>
  : std::true_type
{
};

template<>
struct is_service_request<lslidar_msgs::srv::AngleDistortionCorrection_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lslidar_msgs::srv::AngleDistortionCorrection_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__SRV__DETAIL__ANGLE_DISTORTION_CORRECTION__TRAITS_HPP_
