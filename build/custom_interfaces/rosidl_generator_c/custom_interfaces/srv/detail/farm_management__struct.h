// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/FarmManagement.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__FARM_MANAGEMENT__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__FARM_MANAGEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FarmManagement in the package custom_interfaces.
typedef struct custom_interfaces__srv__FarmManagement_Request
{
  int32_t robot_id;
  float crop_yield;
  rosidl_runtime_c__String status;
} custom_interfaces__srv__FarmManagement_Request;

// Struct for a sequence of custom_interfaces__srv__FarmManagement_Request.
typedef struct custom_interfaces__srv__FarmManagement_Request__Sequence
{
  custom_interfaces__srv__FarmManagement_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__FarmManagement_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FarmManagement in the package custom_interfaces.
typedef struct custom_interfaces__srv__FarmManagement_Response
{
  rosidl_runtime_c__String response;
} custom_interfaces__srv__FarmManagement_Response;

// Struct for a sequence of custom_interfaces__srv__FarmManagement_Response.
typedef struct custom_interfaces__srv__FarmManagement_Response__Sequence
{
  custom_interfaces__srv__FarmManagement_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__FarmManagement_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__FARM_MANAGEMENT__STRUCT_H_
