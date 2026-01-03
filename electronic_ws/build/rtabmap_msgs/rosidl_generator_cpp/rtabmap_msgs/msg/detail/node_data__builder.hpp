// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/NodeData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__BUILDER_HPP_

#include "rtabmap_msgs/msg/detail/node_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeData_env_sensors
{
public:
  explicit Init_NodeData_env_sensors(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::NodeData env_sensors(::rtabmap_msgs::msg::NodeData::_env_sensors_type arg)
  {
    msg_.env_sensors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_global_descriptors
{
public:
  explicit Init_NodeData_global_descriptors(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_env_sensors global_descriptors(::rtabmap_msgs::msg::NodeData::_global_descriptors_type arg)
  {
    msg_.global_descriptors = std::move(arg);
    return Init_NodeData_env_sensors(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_word_descriptors
{
public:
  explicit Init_NodeData_word_descriptors(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_global_descriptors word_descriptors(::rtabmap_msgs::msg::NodeData::_word_descriptors_type arg)
  {
    msg_.word_descriptors = std::move(arg);
    return Init_NodeData_global_descriptors(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_word_pts
{
public:
  explicit Init_NodeData_word_pts(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_word_descriptors word_pts(::rtabmap_msgs::msg::NodeData::_word_pts_type arg)
  {
    msg_.word_pts = std::move(arg);
    return Init_NodeData_word_descriptors(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_word_kpts
{
public:
  explicit Init_NodeData_word_kpts(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_word_pts word_kpts(::rtabmap_msgs::msg::NodeData::_word_kpts_type arg)
  {
    msg_.word_kpts = std::move(arg);
    return Init_NodeData_word_pts(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_word_id_values
{
public:
  explicit Init_NodeData_word_id_values(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_word_kpts word_id_values(::rtabmap_msgs::msg::NodeData::_word_id_values_type arg)
  {
    msg_.word_id_values = std::move(arg);
    return Init_NodeData_word_kpts(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_word_id_keys
{
public:
  explicit Init_NodeData_word_id_keys(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_word_id_values word_id_keys(::rtabmap_msgs::msg::NodeData::_word_id_keys_type arg)
  {
    msg_.word_id_keys = std::move(arg);
    return Init_NodeData_word_id_values(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_grid_view_point
{
public:
  explicit Init_NodeData_grid_view_point(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_word_id_keys grid_view_point(::rtabmap_msgs::msg::NodeData::_grid_view_point_type arg)
  {
    msg_.grid_view_point = std::move(arg);
    return Init_NodeData_word_id_keys(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_grid_cell_size
{
public:
  explicit Init_NodeData_grid_cell_size(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_grid_view_point grid_cell_size(::rtabmap_msgs::msg::NodeData::_grid_cell_size_type arg)
  {
    msg_.grid_cell_size = std::move(arg);
    return Init_NodeData_grid_view_point(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_grid_empty_cells
{
public:
  explicit Init_NodeData_grid_empty_cells(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_grid_cell_size grid_empty_cells(::rtabmap_msgs::msg::NodeData::_grid_empty_cells_type arg)
  {
    msg_.grid_empty_cells = std::move(arg);
    return Init_NodeData_grid_cell_size(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_grid_obstacles
{
public:
  explicit Init_NodeData_grid_obstacles(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_grid_empty_cells grid_obstacles(::rtabmap_msgs::msg::NodeData::_grid_obstacles_type arg)
  {
    msg_.grid_obstacles = std::move(arg);
    return Init_NodeData_grid_empty_cells(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_grid_ground
{
public:
  explicit Init_NodeData_grid_ground(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_grid_obstacles grid_ground(::rtabmap_msgs::msg::NodeData::_grid_ground_type arg)
  {
    msg_.grid_ground = std::move(arg);
    return Init_NodeData_grid_obstacles(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_user_data
{
public:
  explicit Init_NodeData_user_data(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_grid_ground user_data(::rtabmap_msgs::msg::NodeData::_user_data_type arg)
  {
    msg_.user_data = std::move(arg);
    return Init_NodeData_grid_ground(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_laser_scan_local_transform
{
public:
  explicit Init_NodeData_laser_scan_local_transform(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_user_data laser_scan_local_transform(::rtabmap_msgs::msg::NodeData::_laser_scan_local_transform_type arg)
  {
    msg_.laser_scan_local_transform = std::move(arg);
    return Init_NodeData_user_data(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_laser_scan_format
{
public:
  explicit Init_NodeData_laser_scan_format(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_laser_scan_local_transform laser_scan_format(::rtabmap_msgs::msg::NodeData::_laser_scan_format_type arg)
  {
    msg_.laser_scan_format = std::move(arg);
    return Init_NodeData_laser_scan_local_transform(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_laser_scan_max_range
{
public:
  explicit Init_NodeData_laser_scan_max_range(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_laser_scan_format laser_scan_max_range(::rtabmap_msgs::msg::NodeData::_laser_scan_max_range_type arg)
  {
    msg_.laser_scan_max_range = std::move(arg);
    return Init_NodeData_laser_scan_format(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_laser_scan_max_pts
{
public:
  explicit Init_NodeData_laser_scan_max_pts(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_laser_scan_max_range laser_scan_max_pts(::rtabmap_msgs::msg::NodeData::_laser_scan_max_pts_type arg)
  {
    msg_.laser_scan_max_pts = std::move(arg);
    return Init_NodeData_laser_scan_max_range(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_laser_scan
{
public:
  explicit Init_NodeData_laser_scan(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_laser_scan_max_pts laser_scan(::rtabmap_msgs::msg::NodeData::_laser_scan_type arg)
  {
    msg_.laser_scan = std::move(arg);
    return Init_NodeData_laser_scan_max_pts(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_local_transform
{
public:
  explicit Init_NodeData_local_transform(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_laser_scan local_transform(::rtabmap_msgs::msg::NodeData::_local_transform_type arg)
  {
    msg_.local_transform = std::move(arg);
    return Init_NodeData_laser_scan(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_baseline
{
public:
  explicit Init_NodeData_baseline(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_local_transform baseline(::rtabmap_msgs::msg::NodeData::_baseline_type arg)
  {
    msg_.baseline = std::move(arg);
    return Init_NodeData_local_transform(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_height
{
public:
  explicit Init_NodeData_height(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_baseline height(::rtabmap_msgs::msg::NodeData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_NodeData_baseline(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_width
{
public:
  explicit Init_NodeData_width(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_height width(::rtabmap_msgs::msg::NodeData::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_NodeData_height(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_cy
{
public:
  explicit Init_NodeData_cy(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_width cy(::rtabmap_msgs::msg::NodeData::_cy_type arg)
  {
    msg_.cy = std::move(arg);
    return Init_NodeData_width(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_cx
{
public:
  explicit Init_NodeData_cx(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_cy cx(::rtabmap_msgs::msg::NodeData::_cx_type arg)
  {
    msg_.cx = std::move(arg);
    return Init_NodeData_cy(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_fy
{
public:
  explicit Init_NodeData_fy(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_cx fy(::rtabmap_msgs::msg::NodeData::_fy_type arg)
  {
    msg_.fy = std::move(arg);
    return Init_NodeData_cx(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_fx
{
public:
  explicit Init_NodeData_fx(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_fy fx(::rtabmap_msgs::msg::NodeData::_fx_type arg)
  {
    msg_.fx = std::move(arg);
    return Init_NodeData_fy(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_depth
{
public:
  explicit Init_NodeData_depth(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_fx depth(::rtabmap_msgs::msg::NodeData::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_NodeData_fx(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_image
{
public:
  explicit Init_NodeData_image(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_depth image(::rtabmap_msgs::msg::NodeData::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_NodeData_depth(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_gps
{
public:
  explicit Init_NodeData_gps(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_image gps(::rtabmap_msgs::msg::NodeData::_gps_type arg)
  {
    msg_.gps = std::move(arg);
    return Init_NodeData_image(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_ground_truth_pose
{
public:
  explicit Init_NodeData_ground_truth_pose(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_gps ground_truth_pose(::rtabmap_msgs::msg::NodeData::_ground_truth_pose_type arg)
  {
    msg_.ground_truth_pose = std::move(arg);
    return Init_NodeData_gps(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_pose
{
public:
  explicit Init_NodeData_pose(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_ground_truth_pose pose(::rtabmap_msgs::msg::NodeData::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_NodeData_ground_truth_pose(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_label
{
public:
  explicit Init_NodeData_label(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_pose label(::rtabmap_msgs::msg::NodeData::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_NodeData_pose(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_stamp
{
public:
  explicit Init_NodeData_stamp(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_label stamp(::rtabmap_msgs::msg::NodeData::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_NodeData_label(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_weight
{
public:
  explicit Init_NodeData_weight(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_stamp weight(::rtabmap_msgs::msg::NodeData::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_NodeData_stamp(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_map_id
{
public:
  explicit Init_NodeData_map_id(::rtabmap_msgs::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_weight map_id(::rtabmap_msgs::msg::NodeData::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_NodeData_weight(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

class Init_NodeData_id
{
public:
  Init_NodeData_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeData_map_id id(::rtabmap_msgs::msg::NodeData::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NodeData_map_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::NodeData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::NodeData>()
{
  return rtabmap_msgs::msg::builder::Init_NodeData_id();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__NODE_DATA__BUILDER_HPP_
