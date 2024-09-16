// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/RobotTelemetry.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_TELEMETRY__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_TELEMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__RobotTelemetry __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__RobotTelemetry __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotTelemetry_
{
  using Type = RobotTelemetry_<ContainerAllocator>;

  explicit RobotTelemetry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
      this->battery_level = 0.0f;
      this->task_engaged = false;
    }
  }

  explicit RobotTelemetry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
      this->battery_level = 0.0f;
      this->task_engaged = false;
    }
  }

  // field types and members
  using _robot_id_type =
    int32_t;
  _robot_id_type robot_id;
  using _battery_level_type =
    float;
  _battery_level_type battery_level;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _task_engaged_type =
    bool;
  _task_engaged_type task_engaged;

  // setters for named parameter idiom
  Type & set__robot_id(
    const int32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__battery_level(
    const float & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__task_engaged(
    const bool & _arg)
  {
    this->task_engaged = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::RobotTelemetry_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::RobotTelemetry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::RobotTelemetry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::RobotTelemetry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::RobotTelemetry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::RobotTelemetry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::RobotTelemetry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::RobotTelemetry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::RobotTelemetry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::RobotTelemetry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__RobotTelemetry
    std::shared_ptr<custom_interfaces::msg::RobotTelemetry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__RobotTelemetry
    std::shared_ptr<custom_interfaces::msg::RobotTelemetry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTelemetry_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->task_engaged != other.task_engaged) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTelemetry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTelemetry_

// alias to use template instance with default allocator
using RobotTelemetry =
  custom_interfaces::msg::RobotTelemetry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_TELEMETRY__STRUCT_HPP_
