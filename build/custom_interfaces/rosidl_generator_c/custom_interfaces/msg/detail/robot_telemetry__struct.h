// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/RobotTelemetry.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_TELEMETRY__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_TELEMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/RobotTelemetry in the package custom_interfaces.
typedef struct custom_interfaces__msg__RobotTelemetry
{
  int32_t robot_id;
  float battery_level;
  geometry_msgs__msg__Point position;
  bool task_engaged;
} custom_interfaces__msg__RobotTelemetry;

// Struct for a sequence of custom_interfaces__msg__RobotTelemetry.
typedef struct custom_interfaces__msg__RobotTelemetry__Sequence
{
  custom_interfaces__msg__RobotTelemetry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__RobotTelemetry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_TELEMETRY__STRUCT_H_
