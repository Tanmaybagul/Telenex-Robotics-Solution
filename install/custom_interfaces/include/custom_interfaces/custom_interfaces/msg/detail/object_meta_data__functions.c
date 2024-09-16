// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/ObjectMetaData.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/object_meta_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
custom_interfaces__msg__ObjectMetaData__init(custom_interfaces__msg__ObjectMetaData * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  // object_type
  if (!rosidl_runtime_c__String__init(&msg->object_type)) {
    custom_interfaces__msg__ObjectMetaData__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    custom_interfaces__msg__ObjectMetaData__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    custom_interfaces__msg__ObjectMetaData__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    custom_interfaces__msg__ObjectMetaData__fini(msg);
    return false;
  }
  // graspable
  return true;
}

void
custom_interfaces__msg__ObjectMetaData__fini(custom_interfaces__msg__ObjectMetaData * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  // object_type
  rosidl_runtime_c__String__fini(&msg->object_type);
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
  // graspable
}

bool
custom_interfaces__msg__ObjectMetaData__are_equal(const custom_interfaces__msg__ObjectMetaData * lhs, const custom_interfaces__msg__ObjectMetaData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (lhs->object_id != rhs->object_id) {
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_type), &(rhs->object_type)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // graspable
  if (lhs->graspable != rhs->graspable) {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__ObjectMetaData__copy(
  const custom_interfaces__msg__ObjectMetaData * input,
  custom_interfaces__msg__ObjectMetaData * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  output->object_id = input->object_id;
  // object_type
  if (!rosidl_runtime_c__String__copy(
      &(input->object_type), &(output->object_type)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // graspable
  output->graspable = input->graspable;
  return true;
}

custom_interfaces__msg__ObjectMetaData *
custom_interfaces__msg__ObjectMetaData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__ObjectMetaData * msg = (custom_interfaces__msg__ObjectMetaData *)allocator.allocate(sizeof(custom_interfaces__msg__ObjectMetaData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__ObjectMetaData));
  bool success = custom_interfaces__msg__ObjectMetaData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__ObjectMetaData__destroy(custom_interfaces__msg__ObjectMetaData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__ObjectMetaData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__ObjectMetaData__Sequence__init(custom_interfaces__msg__ObjectMetaData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__ObjectMetaData * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__ObjectMetaData *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__ObjectMetaData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__ObjectMetaData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__ObjectMetaData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interfaces__msg__ObjectMetaData__Sequence__fini(custom_interfaces__msg__ObjectMetaData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces__msg__ObjectMetaData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interfaces__msg__ObjectMetaData__Sequence *
custom_interfaces__msg__ObjectMetaData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__ObjectMetaData__Sequence * array = (custom_interfaces__msg__ObjectMetaData__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__ObjectMetaData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__ObjectMetaData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__ObjectMetaData__Sequence__destroy(custom_interfaces__msg__ObjectMetaData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__ObjectMetaData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__ObjectMetaData__Sequence__are_equal(const custom_interfaces__msg__ObjectMetaData__Sequence * lhs, const custom_interfaces__msg__ObjectMetaData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__ObjectMetaData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__ObjectMetaData__Sequence__copy(
  const custom_interfaces__msg__ObjectMetaData__Sequence * input,
  custom_interfaces__msg__ObjectMetaData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__ObjectMetaData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__msg__ObjectMetaData * data =
      (custom_interfaces__msg__ObjectMetaData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__ObjectMetaData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__ObjectMetaData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__msg__ObjectMetaData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
