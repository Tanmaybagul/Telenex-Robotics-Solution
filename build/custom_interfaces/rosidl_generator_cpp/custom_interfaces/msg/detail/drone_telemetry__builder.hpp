// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/DroneTelemetry.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/drone_telemetry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneTelemetry_altitude
{
public:
  explicit Init_DroneTelemetry_altitude(::custom_interfaces::msg::DroneTelemetry & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::DroneTelemetry altitude(::custom_interfaces::msg::DroneTelemetry::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::DroneTelemetry msg_;
};

class Init_DroneTelemetry_power_level
{
public:
  explicit Init_DroneTelemetry_power_level(::custom_interfaces::msg::DroneTelemetry & msg)
  : msg_(msg)
  {}
  Init_DroneTelemetry_altitude power_level(::custom_interfaces::msg::DroneTelemetry::_power_level_type arg)
  {
    msg_.power_level = std::move(arg);
    return Init_DroneTelemetry_altitude(msg_);
  }

private:
  ::custom_interfaces::msg::DroneTelemetry msg_;
};

class Init_DroneTelemetry_velocity_vector
{
public:
  Init_DroneTelemetry_velocity_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneTelemetry_power_level velocity_vector(::custom_interfaces::msg::DroneTelemetry::_velocity_vector_type arg)
  {
    msg_.velocity_vector = std::move(arg);
    return Init_DroneTelemetry_power_level(msg_);
  }

private:
  ::custom_interfaces::msg::DroneTelemetry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::DroneTelemetry>()
{
  return custom_interfaces::msg::builder::Init_DroneTelemetry_velocity_vector();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__BUILDER_HPP_
