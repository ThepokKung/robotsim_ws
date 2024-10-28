// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrr_robot_interfaces:srv/RRRMode.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_MODE__STRUCT_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRMode_Request __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRMode_Request_
{
  using Type = RRRMode_Request_<ContainerAllocator>;

  explicit RRRMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_call = "";
    }
  }

  explicit RRRMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode_call(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_call = "";
    }
  }

  // field types and members
  using _mode_call_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_call_type mode_call;

  // setters for named parameter idiom
  Type & set__mode_call(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode_call = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRMode_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRMode_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRMode_Request_ & other) const
  {
    if (this->mode_call != other.mode_call) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRMode_Request_

// alias to use template instance with default allocator
using RRRMode_Request =
  rrr_robot_interfaces::srv::RRRMode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRMode_Response __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRMode_Response_
{
  using Type = RRRMode_Response_<ContainerAllocator>;

  explicit RRRMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_change = false;
    }
  }

  explicit RRRMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_change = false;
    }
  }

  // field types and members
  using _mode_change_type =
    bool;
  _mode_change_type mode_change;

  // setters for named parameter idiom
  Type & set__mode_change(
    const bool & _arg)
  {
    this->mode_change = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRMode_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRMode_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRMode_Response_ & other) const
  {
    if (this->mode_change != other.mode_change) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRMode_Response_

// alias to use template instance with default allocator
using RRRMode_Response =
  rrr_robot_interfaces::srv::RRRMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rrr_robot_interfaces
{

namespace srv
{

struct RRRMode
{
  using Request = rrr_robot_interfaces::srv::RRRMode_Request;
  using Response = rrr_robot_interfaces::srv::RRRMode_Response;
};

}  // namespace srv

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_MODE__STRUCT_HPP_
