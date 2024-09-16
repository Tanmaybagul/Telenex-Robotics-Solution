// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/DroneTelemetry.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/drone_telemetry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocity_vector'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DroneTelemetry & msg,
  std::ostream & out)
{
  out << "{";
  // member: velocity_vector
  {
    out << "velocity_vector: ";
    to_flow_style_yaml(msg.velocity_vector, out);
    out << ", ";
  }

  // member: power_level
  {
    out << "power_level: ";
    rosidl_generator_traits::value_to_yaml(msg.power_level, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DroneTelemetry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velocity_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_vector:\n";
    to_block_style_yaml(msg.velocity_vector, out, indentation + 2);
  }

  // member: power_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_level: ";
    rosidl_generator_traits::value_to_yaml(msg.power_level, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DroneTelemetry & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::DroneTelemetry & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::DroneTelemetry & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::DroneTelemetry>()
{
  return "custom_interfaces::msg::DroneTelemetry";
}

template<>
inline const char * name<custom_interfaces::msg::DroneTelemetry>()
{
  return "custom_interfaces/msg/DroneTelemetry";
}

template<>
struct has_fixed_size<custom_interfaces::msg::DroneTelemetry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<custom_interfaces::msg::DroneTelemetry>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<custom_interfaces::msg::DroneTelemetry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__TRAITS_HPP_
