// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/ObjectMetaData.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__OBJECT_META_DATA__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__OBJECT_META_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_type'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/ObjectMetaData in the package custom_interfaces.
typedef struct custom_interfaces__msg__ObjectMetaData
{
  int32_t object_id;
  rosidl_runtime_c__String object_type;
  geometry_msgs__msg__Vector3 position;
  geometry_msgs__msg__Quaternion orientation;
  geometry_msgs__msg__Vector3 size;
  bool graspable;
} custom_interfaces__msg__ObjectMetaData;

// Struct for a sequence of custom_interfaces__msg__ObjectMetaData.
typedef struct custom_interfaces__msg__ObjectMetaData__Sequence
{
  custom_interfaces__msg__ObjectMetaData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__ObjectMetaData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__OBJECT_META_DATA__STRUCT_H_
