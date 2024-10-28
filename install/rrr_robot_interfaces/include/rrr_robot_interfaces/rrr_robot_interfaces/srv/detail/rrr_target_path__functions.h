// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rrr_robot_interfaces:srv/RRRTargetPath.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TARGET_PATH__FUNCTIONS_H_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TARGET_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rrr_robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rrr_robot_interfaces/srv/detail/rrr_target_path__struct.h"

/// Initialize srv/RRRTargetPath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rrr_robot_interfaces__srv__RRRTargetPath_Request
 * )) before or use
 * rrr_robot_interfaces__srv__RRRTargetPath_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Request__init(rrr_robot_interfaces__srv__RRRTargetPath_Request * msg);

/// Finalize srv/RRRTargetPath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
void
rrr_robot_interfaces__srv__RRRTargetPath_Request__fini(rrr_robot_interfaces__srv__RRRTargetPath_Request * msg);

/// Create srv/RRRTargetPath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
rrr_robot_interfaces__srv__RRRTargetPath_Request *
rrr_robot_interfaces__srv__RRRTargetPath_Request__create();

/// Destroy srv/RRRTargetPath message.
/**
 * It calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
void
rrr_robot_interfaces__srv__RRRTargetPath_Request__destroy(rrr_robot_interfaces__srv__RRRTargetPath_Request * msg);

/// Check for srv/RRRTargetPath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Request__are_equal(const rrr_robot_interfaces__srv__RRRTargetPath_Request * lhs, const rrr_robot_interfaces__srv__RRRTargetPath_Request * rhs);

/// Copy a srv/RRRTargetPath message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Request__copy(
  const rrr_robot_interfaces__srv__RRRTargetPath_Request * input,
  rrr_robot_interfaces__srv__RRRTargetPath_Request * output);

/// Initialize array of srv/RRRTargetPath messages.
/**
 * It allocates the memory for the number of elements and calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence__init(rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence * array, size_t size);

/// Finalize array of srv/RRRTargetPath messages.
/**
 * It calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
void
rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence__fini(rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence * array);

/// Create array of srv/RRRTargetPath messages.
/**
 * It allocates the memory for the array and calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence *
rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence__create(size_t size);

/// Destroy array of srv/RRRTargetPath messages.
/**
 * It calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
void
rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence__destroy(rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence * array);

/// Check for srv/RRRTargetPath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence__are_equal(const rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence * lhs, const rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence * rhs);

/// Copy an array of srv/RRRTargetPath messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence__copy(
  const rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence * input,
  rrr_robot_interfaces__srv__RRRTargetPath_Request__Sequence * output);

/// Initialize srv/RRRTargetPath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rrr_robot_interfaces__srv__RRRTargetPath_Response
 * )) before or use
 * rrr_robot_interfaces__srv__RRRTargetPath_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Response__init(rrr_robot_interfaces__srv__RRRTargetPath_Response * msg);

/// Finalize srv/RRRTargetPath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
void
rrr_robot_interfaces__srv__RRRTargetPath_Response__fini(rrr_robot_interfaces__srv__RRRTargetPath_Response * msg);

/// Create srv/RRRTargetPath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
rrr_robot_interfaces__srv__RRRTargetPath_Response *
rrr_robot_interfaces__srv__RRRTargetPath_Response__create();

/// Destroy srv/RRRTargetPath message.
/**
 * It calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
void
rrr_robot_interfaces__srv__RRRTargetPath_Response__destroy(rrr_robot_interfaces__srv__RRRTargetPath_Response * msg);

/// Check for srv/RRRTargetPath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Response__are_equal(const rrr_robot_interfaces__srv__RRRTargetPath_Response * lhs, const rrr_robot_interfaces__srv__RRRTargetPath_Response * rhs);

/// Copy a srv/RRRTargetPath message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Response__copy(
  const rrr_robot_interfaces__srv__RRRTargetPath_Response * input,
  rrr_robot_interfaces__srv__RRRTargetPath_Response * output);

/// Initialize array of srv/RRRTargetPath messages.
/**
 * It allocates the memory for the number of elements and calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence__init(rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence * array, size_t size);

/// Finalize array of srv/RRRTargetPath messages.
/**
 * It calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
void
rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence__fini(rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence * array);

/// Create array of srv/RRRTargetPath messages.
/**
 * It allocates the memory for the array and calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence *
rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence__create(size_t size);

/// Destroy array of srv/RRRTargetPath messages.
/**
 * It calls
 * rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
void
rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence__destroy(rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence * array);

/// Check for srv/RRRTargetPath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence__are_equal(const rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence * lhs, const rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence * rhs);

/// Copy an array of srv/RRRTargetPath messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rrr_robot_interfaces
bool
rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence__copy(
  const rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence * input,
  rrr_robot_interfaces__srv__RRRTargetPath_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TARGET_PATH__FUNCTIONS_H_
