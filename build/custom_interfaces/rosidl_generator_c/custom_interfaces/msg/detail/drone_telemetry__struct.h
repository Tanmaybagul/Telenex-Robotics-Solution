// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/DroneTelemetry.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'velocity_vector'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/DroneTelemetry in the package custom_interfaces.
typedef struct custom_interfaces__msg__DroneTelemetry
{
  geometry_msgs__msg__Twist velocity_vector;
  float power_level;
  float altitude;
} custom_interfaces__msg__DroneTelemetry;

// Struct for a sequence of custom_interfaces__msg__DroneTelemetry.
typedef struct custom_interfaces__msg__DroneTelemetry__Sequence
{
  custom_interfaces__msg__DroneTelemetry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__DroneTelemetry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_H_
