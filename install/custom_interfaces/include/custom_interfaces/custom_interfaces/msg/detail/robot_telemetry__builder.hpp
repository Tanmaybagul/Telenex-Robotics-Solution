// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/RobotTelemetry.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_TELEMETRY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_TELEMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/robot_telemetry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotTelemetry_task_engaged
{
public:
  explicit Init_RobotTelemetry_task_engaged(::custom_interfaces::msg::RobotTelemetry & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::RobotTelemetry task_engaged(::custom_interfaces::msg::RobotTelemetry::_task_engaged_type arg)
  {
    msg_.task_engaged = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::RobotTelemetry msg_;
};

class Init_RobotTelemetry_position
{
public:
  explicit Init_RobotTelemetry_position(::custom_interfaces::msg::RobotTelemetry & msg)
  : msg_(msg)
  {}
  Init_RobotTelemetry_task_engaged position(::custom_interfaces::msg::RobotTelemetry::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RobotTelemetry_task_engaged(msg_);
  }

private:
  ::custom_interfaces::msg::RobotTelemetry msg_;
};

class Init_RobotTelemetry_battery_level
{
public:
  explicit Init_RobotTelemetry_battery_level(::custom_interfaces::msg::RobotTelemetry & msg)
  : msg_(msg)
  {}
  Init_RobotTelemetry_position battery_level(::custom_interfaces::msg::RobotTelemetry::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_RobotTelemetry_position(msg_);
  }

private:
  ::custom_interfaces::msg::RobotTelemetry msg_;
};

class Init_RobotTelemetry_robot_id
{
public:
  Init_RobotTelemetry_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTelemetry_battery_level robot_id(::custom_interfaces::msg::RobotTelemetry::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotTelemetry_battery_level(msg_);
  }

private:
  ::custom_interfaces::msg::RobotTelemetry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::RobotTelemetry>()
{
  return custom_interfaces::msg::builder::Init_RobotTelemetry_robot_id();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_TELEMETRY__BUILDER_HPP_
