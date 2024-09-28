// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rrr_robot_interfaces:srv/RRRIPKTarget.idl
// generated code does not contain a copyright notice
#include "rrr_robot_interfaces/srv/detail/rrripk_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ipk_target`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
rrr_robot_interfaces__srv__RRRIPKTarget_Request__init(rrr_robot_interfaces__srv__RRRIPKTarget_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ipk_target
  if (!geometry_msgs__msg__PoseStamped__init(&msg->ipk_target)) {
    rrr_robot_interfaces__srv__RRRIPKTarget_Request__fini(msg);
    return false;
  }
  return true;
}

void
rrr_robot_interfaces__srv__RRRIPKTarget_Request__fini(rrr_robot_interfaces__srv__RRRIPKTarget_Request * msg)
{
  if (!msg) {
    return;
  }
  // ipk_target
  geometry_msgs__msg__PoseStamped__fini(&msg->ipk_target);
}

bool
rrr_robot_interfaces__srv__RRRIPKTarget_Request__are_equal(const rrr_robot_interfaces__srv__RRRIPKTarget_Request * lhs, const rrr_robot_interfaces__srv__RRRIPKTarget_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ipk_target
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->ipk_target), &(rhs->ipk_target)))
  {
    return false;
  }
  return true;
}

bool
rrr_robot_interfaces__srv__RRRIPKTarget_Request__copy(
  const rrr_robot_interfaces__srv__RRRIPKTarget_Request * input,
  rrr_robot_interfaces__srv__RRRIPKTarget_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ipk_target
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->ipk_target), &(output->ipk_target)))
  {
    return false;
  }
  return true;
}

rrr_robot_interfaces__srv__RRRIPKTarget_Request *
rrr_robot_interfaces__srv__RRRIPKTarget_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRIPKTarget_Request * msg = (rrr_robot_interfaces__srv__RRRIPKTarget_Request *)allocator.allocate(sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Request));
  bool success = rrr_robot_interfaces__srv__RRRIPKTarget_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rrr_robot_interfaces__srv__RRRIPKTarget_Request__destroy(rrr_robot_interfaces__srv__RRRIPKTarget_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rrr_robot_interfaces__srv__RRRIPKTarget_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence__init(rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRIPKTarget_Request * data = NULL;

  if (size) {
    data = (rrr_robot_interfaces__srv__RRRIPKTarget_Request *)allocator.zero_allocate(size, sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rrr_robot_interfaces__srv__RRRIPKTarget_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rrr_robot_interfaces__srv__RRRIPKTarget_Request__fini(&data[i - 1]);
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
rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence__fini(rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence * array)
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
      rrr_robot_interfaces__srv__RRRIPKTarget_Request__fini(&array->data[i]);
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

rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence *
rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence * array = (rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence *)allocator.allocate(sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence__destroy(rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence__are_equal(const rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence * lhs, const rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rrr_robot_interfaces__srv__RRRIPKTarget_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence__copy(
  const rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence * input,
  rrr_robot_interfaces__srv__RRRIPKTarget_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rrr_robot_interfaces__srv__RRRIPKTarget_Request * data =
      (rrr_robot_interfaces__srv__RRRIPKTarget_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rrr_robot_interfaces__srv__RRRIPKTarget_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rrr_robot_interfaces__srv__RRRIPKTarget_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rrr_robot_interfaces__srv__RRRIPKTarget_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rrr_robot_interfaces__srv__RRRIPKTarget_Response__init(rrr_robot_interfaces__srv__RRRIPKTarget_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rrr_robot_interfaces__srv__RRRIPKTarget_Response__fini(rrr_robot_interfaces__srv__RRRIPKTarget_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rrr_robot_interfaces__srv__RRRIPKTarget_Response__are_equal(const rrr_robot_interfaces__srv__RRRIPKTarget_Response * lhs, const rrr_robot_interfaces__srv__RRRIPKTarget_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rrr_robot_interfaces__srv__RRRIPKTarget_Response__copy(
  const rrr_robot_interfaces__srv__RRRIPKTarget_Response * input,
  rrr_robot_interfaces__srv__RRRIPKTarget_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rrr_robot_interfaces__srv__RRRIPKTarget_Response *
rrr_robot_interfaces__srv__RRRIPKTarget_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRIPKTarget_Response * msg = (rrr_robot_interfaces__srv__RRRIPKTarget_Response *)allocator.allocate(sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Response));
  bool success = rrr_robot_interfaces__srv__RRRIPKTarget_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rrr_robot_interfaces__srv__RRRIPKTarget_Response__destroy(rrr_robot_interfaces__srv__RRRIPKTarget_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rrr_robot_interfaces__srv__RRRIPKTarget_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence__init(rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRIPKTarget_Response * data = NULL;

  if (size) {
    data = (rrr_robot_interfaces__srv__RRRIPKTarget_Response *)allocator.zero_allocate(size, sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rrr_robot_interfaces__srv__RRRIPKTarget_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rrr_robot_interfaces__srv__RRRIPKTarget_Response__fini(&data[i - 1]);
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
rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence__fini(rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence * array)
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
      rrr_robot_interfaces__srv__RRRIPKTarget_Response__fini(&array->data[i]);
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

rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence *
rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence * array = (rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence *)allocator.allocate(sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence__destroy(rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence__are_equal(const rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence * lhs, const rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rrr_robot_interfaces__srv__RRRIPKTarget_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence__copy(
  const rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence * input,
  rrr_robot_interfaces__srv__RRRIPKTarget_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rrr_robot_interfaces__srv__RRRIPKTarget_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rrr_robot_interfaces__srv__RRRIPKTarget_Response * data =
      (rrr_robot_interfaces__srv__RRRIPKTarget_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rrr_robot_interfaces__srv__RRRIPKTarget_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rrr_robot_interfaces__srv__RRRIPKTarget_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rrr_robot_interfaces__srv__RRRIPKTarget_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
