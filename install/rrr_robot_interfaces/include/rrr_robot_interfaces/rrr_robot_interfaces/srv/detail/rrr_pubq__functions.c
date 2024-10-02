// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rrr_robot_interfaces:srv/RRRPubq.idl
// generated code does not contain a copyright notice
#include "rrr_robot_interfaces/srv/detail/rrr_pubq__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `goal_pos`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
rrr_robot_interfaces__srv__RRRPubq_Request__init(rrr_robot_interfaces__srv__RRRPubq_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_pos
  if (!geometry_msgs__msg__Point__init(&msg->goal_pos)) {
    rrr_robot_interfaces__srv__RRRPubq_Request__fini(msg);
    return false;
  }
  // q1
  // q2
  // q3
  return true;
}

void
rrr_robot_interfaces__srv__RRRPubq_Request__fini(rrr_robot_interfaces__srv__RRRPubq_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_pos
  geometry_msgs__msg__Point__fini(&msg->goal_pos);
  // q1
  // q2
  // q3
}

bool
rrr_robot_interfaces__srv__RRRPubq_Request__are_equal(const rrr_robot_interfaces__srv__RRRPubq_Request * lhs, const rrr_robot_interfaces__srv__RRRPubq_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->goal_pos), &(rhs->goal_pos)))
  {
    return false;
  }
  // q1
  if (lhs->q1 != rhs->q1) {
    return false;
  }
  // q2
  if (lhs->q2 != rhs->q2) {
    return false;
  }
  // q3
  if (lhs->q3 != rhs->q3) {
    return false;
  }
  return true;
}

bool
rrr_robot_interfaces__srv__RRRPubq_Request__copy(
  const rrr_robot_interfaces__srv__RRRPubq_Request * input,
  rrr_robot_interfaces__srv__RRRPubq_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->goal_pos), &(output->goal_pos)))
  {
    return false;
  }
  // q1
  output->q1 = input->q1;
  // q2
  output->q2 = input->q2;
  // q3
  output->q3 = input->q3;
  return true;
}

rrr_robot_interfaces__srv__RRRPubq_Request *
rrr_robot_interfaces__srv__RRRPubq_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRPubq_Request * msg = (rrr_robot_interfaces__srv__RRRPubq_Request *)allocator.allocate(sizeof(rrr_robot_interfaces__srv__RRRPubq_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rrr_robot_interfaces__srv__RRRPubq_Request));
  bool success = rrr_robot_interfaces__srv__RRRPubq_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rrr_robot_interfaces__srv__RRRPubq_Request__destroy(rrr_robot_interfaces__srv__RRRPubq_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rrr_robot_interfaces__srv__RRRPubq_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rrr_robot_interfaces__srv__RRRPubq_Request__Sequence__init(rrr_robot_interfaces__srv__RRRPubq_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRPubq_Request * data = NULL;

  if (size) {
    data = (rrr_robot_interfaces__srv__RRRPubq_Request *)allocator.zero_allocate(size, sizeof(rrr_robot_interfaces__srv__RRRPubq_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rrr_robot_interfaces__srv__RRRPubq_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rrr_robot_interfaces__srv__RRRPubq_Request__fini(&data[i - 1]);
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
rrr_robot_interfaces__srv__RRRPubq_Request__Sequence__fini(rrr_robot_interfaces__srv__RRRPubq_Request__Sequence * array)
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
      rrr_robot_interfaces__srv__RRRPubq_Request__fini(&array->data[i]);
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

rrr_robot_interfaces__srv__RRRPubq_Request__Sequence *
rrr_robot_interfaces__srv__RRRPubq_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRPubq_Request__Sequence * array = (rrr_robot_interfaces__srv__RRRPubq_Request__Sequence *)allocator.allocate(sizeof(rrr_robot_interfaces__srv__RRRPubq_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rrr_robot_interfaces__srv__RRRPubq_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rrr_robot_interfaces__srv__RRRPubq_Request__Sequence__destroy(rrr_robot_interfaces__srv__RRRPubq_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rrr_robot_interfaces__srv__RRRPubq_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rrr_robot_interfaces__srv__RRRPubq_Request__Sequence__are_equal(const rrr_robot_interfaces__srv__RRRPubq_Request__Sequence * lhs, const rrr_robot_interfaces__srv__RRRPubq_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rrr_robot_interfaces__srv__RRRPubq_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rrr_robot_interfaces__srv__RRRPubq_Request__Sequence__copy(
  const rrr_robot_interfaces__srv__RRRPubq_Request__Sequence * input,
  rrr_robot_interfaces__srv__RRRPubq_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rrr_robot_interfaces__srv__RRRPubq_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rrr_robot_interfaces__srv__RRRPubq_Request * data =
      (rrr_robot_interfaces__srv__RRRPubq_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rrr_robot_interfaces__srv__RRRPubq_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rrr_robot_interfaces__srv__RRRPubq_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rrr_robot_interfaces__srv__RRRPubq_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rrr_robot_interfaces__srv__RRRPubq_Response__init(rrr_robot_interfaces__srv__RRRPubq_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rrr_robot_interfaces__srv__RRRPubq_Response__fini(rrr_robot_interfaces__srv__RRRPubq_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rrr_robot_interfaces__srv__RRRPubq_Response__are_equal(const rrr_robot_interfaces__srv__RRRPubq_Response * lhs, const rrr_robot_interfaces__srv__RRRPubq_Response * rhs)
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
rrr_robot_interfaces__srv__RRRPubq_Response__copy(
  const rrr_robot_interfaces__srv__RRRPubq_Response * input,
  rrr_robot_interfaces__srv__RRRPubq_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rrr_robot_interfaces__srv__RRRPubq_Response *
rrr_robot_interfaces__srv__RRRPubq_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRPubq_Response * msg = (rrr_robot_interfaces__srv__RRRPubq_Response *)allocator.allocate(sizeof(rrr_robot_interfaces__srv__RRRPubq_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rrr_robot_interfaces__srv__RRRPubq_Response));
  bool success = rrr_robot_interfaces__srv__RRRPubq_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rrr_robot_interfaces__srv__RRRPubq_Response__destroy(rrr_robot_interfaces__srv__RRRPubq_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rrr_robot_interfaces__srv__RRRPubq_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rrr_robot_interfaces__srv__RRRPubq_Response__Sequence__init(rrr_robot_interfaces__srv__RRRPubq_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRPubq_Response * data = NULL;

  if (size) {
    data = (rrr_robot_interfaces__srv__RRRPubq_Response *)allocator.zero_allocate(size, sizeof(rrr_robot_interfaces__srv__RRRPubq_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rrr_robot_interfaces__srv__RRRPubq_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rrr_robot_interfaces__srv__RRRPubq_Response__fini(&data[i - 1]);
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
rrr_robot_interfaces__srv__RRRPubq_Response__Sequence__fini(rrr_robot_interfaces__srv__RRRPubq_Response__Sequence * array)
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
      rrr_robot_interfaces__srv__RRRPubq_Response__fini(&array->data[i]);
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

rrr_robot_interfaces__srv__RRRPubq_Response__Sequence *
rrr_robot_interfaces__srv__RRRPubq_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrr_robot_interfaces__srv__RRRPubq_Response__Sequence * array = (rrr_robot_interfaces__srv__RRRPubq_Response__Sequence *)allocator.allocate(sizeof(rrr_robot_interfaces__srv__RRRPubq_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rrr_robot_interfaces__srv__RRRPubq_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rrr_robot_interfaces__srv__RRRPubq_Response__Sequence__destroy(rrr_robot_interfaces__srv__RRRPubq_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rrr_robot_interfaces__srv__RRRPubq_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rrr_robot_interfaces__srv__RRRPubq_Response__Sequence__are_equal(const rrr_robot_interfaces__srv__RRRPubq_Response__Sequence * lhs, const rrr_robot_interfaces__srv__RRRPubq_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rrr_robot_interfaces__srv__RRRPubq_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rrr_robot_interfaces__srv__RRRPubq_Response__Sequence__copy(
  const rrr_robot_interfaces__srv__RRRPubq_Response__Sequence * input,
  rrr_robot_interfaces__srv__RRRPubq_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rrr_robot_interfaces__srv__RRRPubq_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rrr_robot_interfaces__srv__RRRPubq_Response * data =
      (rrr_robot_interfaces__srv__RRRPubq_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rrr_robot_interfaces__srv__RRRPubq_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rrr_robot_interfaces__srv__RRRPubq_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rrr_robot_interfaces__srv__RRRPubq_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
