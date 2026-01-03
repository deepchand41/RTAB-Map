// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/NodeData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
// Member 'ground_truth_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'gps'
#include "rtabmap_msgs/msg/detail/gps__struct.hpp"
// Member 'local_transform'
// Member 'laser_scan_local_transform'
#include "geometry_msgs/msg/detail/transform__struct.hpp"
// Member 'grid_view_point'
// Member 'word_pts'
#include "rtabmap_msgs/msg/detail/point3f__struct.hpp"
// Member 'word_kpts'
#include "rtabmap_msgs/msg/detail/key_point__struct.hpp"
// Member 'global_descriptors'
#include "rtabmap_msgs/msg/detail/global_descriptor__struct.hpp"
// Member 'env_sensors'
#include "rtabmap_msgs/msg/detail/env_sensor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__NodeData __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__NodeData __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeData_
{
  using Type = NodeData_<ContainerAllocator>;

  explicit NodeData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    ground_truth_pose(_init),
    gps(_init),
    laser_scan_local_transform(_init),
    grid_view_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->map_id = 0l;
      this->weight = 0l;
      this->stamp = 0.0;
      this->label = "";
      this->laser_scan_max_pts = 0l;
      this->laser_scan_max_range = 0.0f;
      this->laser_scan_format = 0l;
      this->grid_cell_size = 0.0f;
    }
  }

  explicit NodeData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc),
    pose(_alloc, _init),
    ground_truth_pose(_alloc, _init),
    gps(_alloc, _init),
    laser_scan_local_transform(_alloc, _init),
    grid_view_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->map_id = 0l;
      this->weight = 0l;
      this->stamp = 0.0;
      this->label = "";
      this->laser_scan_max_pts = 0l;
      this->laser_scan_max_range = 0.0f;
      this->laser_scan_format = 0l;
      this->grid_cell_size = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _map_id_type =
    int32_t;
  _map_id_type map_id;
  using _weight_type =
    int32_t;
  _weight_type weight;
  using _stamp_type =
    double;
  _stamp_type stamp;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _label_type label;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _ground_truth_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _ground_truth_pose_type ground_truth_pose;
  using _gps_type =
    rtabmap_msgs::msg::GPS_<ContainerAllocator>;
  _gps_type gps;
  using _image_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _image_type image;
  using _depth_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _depth_type depth;
  using _fx_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _fx_type fx;
  using _fy_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _fy_type fy;
  using _cx_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _cx_type cx;
  using _cy_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _cy_type cy;
  using _width_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _width_type width;
  using _height_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _height_type height;
  using _baseline_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _baseline_type baseline;
  using _local_transform_type =
    std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Transform_<ContainerAllocator>>::other>;
  _local_transform_type local_transform;
  using _laser_scan_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _laser_scan_type laser_scan;
  using _laser_scan_max_pts_type =
    int32_t;
  _laser_scan_max_pts_type laser_scan_max_pts;
  using _laser_scan_max_range_type =
    float;
  _laser_scan_max_range_type laser_scan_max_range;
  using _laser_scan_format_type =
    int32_t;
  _laser_scan_format_type laser_scan_format;
  using _laser_scan_local_transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _laser_scan_local_transform_type laser_scan_local_transform;
  using _user_data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _user_data_type user_data;
  using _grid_ground_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _grid_ground_type grid_ground;
  using _grid_obstacles_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _grid_obstacles_type grid_obstacles;
  using _grid_empty_cells_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _grid_empty_cells_type grid_empty_cells;
  using _grid_cell_size_type =
    float;
  _grid_cell_size_type grid_cell_size;
  using _grid_view_point_type =
    rtabmap_msgs::msg::Point3f_<ContainerAllocator>;
  _grid_view_point_type grid_view_point;
  using _word_id_keys_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _word_id_keys_type word_id_keys;
  using _word_id_values_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _word_id_values_type word_id_values;
  using _word_kpts_type =
    std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>::other>;
  _word_kpts_type word_kpts;
  using _word_pts_type =
    std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>::other>;
  _word_pts_type word_pts;
  using _word_descriptors_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _word_descriptors_type word_descriptors;
  using _global_descriptors_type =
    std::vector<rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>>::other>;
  _global_descriptors_type global_descriptors;
  using _env_sensors_type =
    std::vector<rtabmap_msgs::msg::EnvSensor_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_msgs::msg::EnvSensor_<ContainerAllocator>>::other>;
  _env_sensors_type env_sensors;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__map_id(
    const int32_t & _arg)
  {
    this->map_id = _arg;
    return *this;
  }
  Type & set__weight(
    const int32_t & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__stamp(
    const double & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__ground_truth_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->ground_truth_pose = _arg;
    return *this;
  }
  Type & set__gps(
    const rtabmap_msgs::msg::GPS_<ContainerAllocator> & _arg)
  {
    this->gps = _arg;
    return *this;
  }
  Type & set__image(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__depth(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__fx(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->fx = _arg;
    return *this;
  }
  Type & set__fy(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->fy = _arg;
    return *this;
  }
  Type & set__cx(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->cx = _arg;
    return *this;
  }
  Type & set__cy(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->cy = _arg;
    return *this;
  }
  Type & set__width(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__baseline(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->baseline = _arg;
    return *this;
  }
  Type & set__local_transform(
    const std::vector<geometry_msgs::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Transform_<ContainerAllocator>>::other> & _arg)
  {
    this->local_transform = _arg;
    return *this;
  }
  Type & set__laser_scan(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->laser_scan = _arg;
    return *this;
  }
  Type & set__laser_scan_max_pts(
    const int32_t & _arg)
  {
    this->laser_scan_max_pts = _arg;
    return *this;
  }
  Type & set__laser_scan_max_range(
    const float & _arg)
  {
    this->laser_scan_max_range = _arg;
    return *this;
  }
  Type & set__laser_scan_format(
    const int32_t & _arg)
  {
    this->laser_scan_format = _arg;
    return *this;
  }
  Type & set__laser_scan_local_transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->laser_scan_local_transform = _arg;
    return *this;
  }
  Type & set__user_data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->user_data = _arg;
    return *this;
  }
  Type & set__grid_ground(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->grid_ground = _arg;
    return *this;
  }
  Type & set__grid_obstacles(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->grid_obstacles = _arg;
    return *this;
  }
  Type & set__grid_empty_cells(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->grid_empty_cells = _arg;
    return *this;
  }
  Type & set__grid_cell_size(
    const float & _arg)
  {
    this->grid_cell_size = _arg;
    return *this;
  }
  Type & set__grid_view_point(
    const rtabmap_msgs::msg::Point3f_<ContainerAllocator> & _arg)
  {
    this->grid_view_point = _arg;
    return *this;
  }
  Type & set__word_id_keys(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->word_id_keys = _arg;
    return *this;
  }
  Type & set__word_id_values(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->word_id_values = _arg;
    return *this;
  }
  Type & set__word_kpts(
    const std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>::other> & _arg)
  {
    this->word_kpts = _arg;
    return *this;
  }
  Type & set__word_pts(
    const std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>::other> & _arg)
  {
    this->word_pts = _arg;
    return *this;
  }
  Type & set__word_descriptors(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->word_descriptors = _arg;
    return *this;
  }
  Type & set__global_descriptors(
    const std::vector<rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_msgs::msg::GlobalDescriptor_<ContainerAllocator>>::other> & _arg)
  {
    this->global_descriptors = _arg;
    return *this;
  }
  Type & set__env_sensors(
    const std::vector<rtabmap_msgs::msg::EnvSensor_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_msgs::msg::EnvSensor_<ContainerAllocator>>::other> & _arg)
  {
    this->env_sensors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::NodeData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::NodeData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::NodeData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::NodeData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::NodeData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::NodeData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::NodeData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::NodeData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::NodeData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::NodeData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__NodeData
    std::shared_ptr<rtabmap_msgs::msg::NodeData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__NodeData
    std::shared_ptr<rtabmap_msgs::msg::NodeData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeData_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->ground_truth_pose != other.ground_truth_pose) {
      return false;
    }
    if (this->gps != other.gps) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->fx != other.fx) {
      return false;
    }
    if (this->fy != other.fy) {
      return false;
    }
    if (this->cx != other.cx) {
      return false;
    }
    if (this->cy != other.cy) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->baseline != other.baseline) {
      return false;
    }
    if (this->local_transform != other.local_transform) {
      return false;
    }
    if (this->laser_scan != other.laser_scan) {
      return false;
    }
    if (this->laser_scan_max_pts != other.laser_scan_max_pts) {
      return false;
    }
    if (this->laser_scan_max_range != other.laser_scan_max_range) {
      return false;
    }
    if (this->laser_scan_format != other.laser_scan_format) {
      return false;
    }
    if (this->laser_scan_local_transform != other.laser_scan_local_transform) {
      return false;
    }
    if (this->user_data != other.user_data) {
      return false;
    }
    if (this->grid_ground != other.grid_ground) {
      return false;
    }
    if (this->grid_obstacles != other.grid_obstacles) {
      return false;
    }
    if (this->grid_empty_cells != other.grid_empty_cells) {
      return false;
    }
    if (this->grid_cell_size != other.grid_cell_size) {
      return false;
    }
    if (this->grid_view_point != other.grid_view_point) {
      return false;
    }
    if (this->word_id_keys != other.word_id_keys) {
      return false;
    }
    if (this->word_id_values != other.word_id_values) {
      return false;
    }
    if (this->word_kpts != other.word_kpts) {
      return false;
    }
    if (this->word_pts != other.word_pts) {
      return false;
    }
    if (this->word_descriptors != other.word_descriptors) {
      return false;
    }
    if (this->global_descriptors != other.global_descriptors) {
      return false;
    }
    if (this->env_sensors != other.env_sensors) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeData_

// alias to use template instance with default allocator
using NodeData =
  rtabmap_msgs::msg::NodeData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__STRUCT_HPP_
