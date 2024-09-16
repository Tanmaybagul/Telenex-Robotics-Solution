// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/DroneTelemetry.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'velocity_vector'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__DroneTelemetry __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__DroneTelemetry __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneTelemetry_
{
  using Type = DroneTelemetry_<ContainerAllocator>;

  explicit DroneTelemetry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity_vector(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power_level = 0.0f;
      this->altitude = 0.0f;
    }
  }

  explicit DroneTelemetry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity_vector(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power_level = 0.0f;
      this->altitude = 0.0f;
    }
  }

  // field types and members
  using _velocity_vector_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_vector_type velocity_vector;
  using _power_level_type =
    float;
  _power_level_type power_level;
  using _altitude_type =
    float;
  _altitude_type altitude;

  // setters for named parameter idiom
  Type & set__velocity_vector(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_vector = _arg;
    return *this;
  }
  Type & set__power_level(
    const float & _arg)
  {
    this->power_level = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::DroneTelemetry_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::DroneTelemetry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::DroneTelemetry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::DroneTelemetry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::DroneTelemetry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::DroneTelemetry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::DroneTelemetry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::DroneTelemetry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::DroneTelemetry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::DroneTelemetry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__DroneTelemetry
    std::shared_ptr<custom_interfaces::msg::DroneTelemetry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__DroneTelemetry
    std::shared_ptr<custom_interfaces::msg::DroneTelemetry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneTelemetry_ & other) const
  {
    if (this->velocity_vector != other.velocity_vector) {
      return false;
    }
    if (this->power_level != other.power_level) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneTelemetry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneTelemetry_

// alias to use template instance with default allocator
using DroneTelemetry =
  custom_interfaces::msg::DroneTelemetry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_HPP_
