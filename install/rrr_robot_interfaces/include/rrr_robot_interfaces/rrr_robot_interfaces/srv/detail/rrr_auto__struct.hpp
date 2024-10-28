// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrr_robot_interfaces:srv/RRRAuto.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__STRUCT_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRAuto_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRAuto_Request __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRAuto_Request_
{
  using Type = RRRAuto_Request_<ContainerAllocator>;

  explicit RRRAuto_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_run = false;
    }
  }

  explicit RRRAuto_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_run = false;
    }
  }

  // field types and members
  using _auto_run_type =
    bool;
  _auto_run_type auto_run;

  // setters for named parameter idiom
  Type & set__auto_run(
    const bool & _arg)
  {
    this->auto_run = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRAuto_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRAuto_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRAuto_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRAuto_Request_ & other) const
  {
    if (this->auto_run != other.auto_run) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRAuto_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRAuto_Request_

// alias to use template instance with default allocator
using RRRAuto_Request =
  rrr_robot_interfaces::srv::RRRAuto_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRAuto_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRAuto_Response __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRAuto_Response_
{
  using Type = RRRAuto_Response_<ContainerAllocator>;

  explicit RRRAuto_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RRRAuto_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRAuto_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRAuto_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRAuto_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRAuto_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRAuto_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRAuto_Response_

// alias to use template instance with default allocator
using RRRAuto_Response =
  rrr_robot_interfaces::srv::RRRAuto_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rrr_robot_interfaces
{

namespace srv
{

struct RRRAuto
{
  using Request = rrr_robot_interfaces::srv::RRRAuto_Request;
  using Response = rrr_robot_interfaces::srv::RRRAuto_Response;
};

}  // namespace srv

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__STRUCT_HPP_
