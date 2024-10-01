// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrr_robot_interfaces:srv/RRRIPK.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK__STRUCT_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ipk_target'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRIPK_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRIPK_Request __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRIPK_Request_
{
  using Type = RRRIPK_Request_<ContainerAllocator>;

  explicit RRRIPK_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ipk_target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ipk_call = false;
    }
  }

  explicit RRRIPK_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ipk_target(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ipk_call = false;
    }
  }

  // field types and members
  using _ipk_call_type =
    bool;
  _ipk_call_type ipk_call;
  using _ipk_target_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _ipk_target_type ipk_target;

  // setters for named parameter idiom
  Type & set__ipk_call(
    const bool & _arg)
  {
    this->ipk_call = _arg;
    return *this;
  }
  Type & set__ipk_target(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->ipk_target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRIPK_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRIPK_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRIPK_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRIPK_Request_ & other) const
  {
    if (this->ipk_call != other.ipk_call) {
      return false;
    }
    if (this->ipk_target != other.ipk_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRIPK_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRIPK_Request_

// alias to use template instance with default allocator
using RRRIPK_Request =
  rrr_robot_interfaces::srv::RRRIPK_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRIPK_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRIPK_Response __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRIPK_Response_
{
  using Type = RRRIPK_Response_<ContainerAllocator>;

  explicit RRRIPK_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ipk_check = false;
      this->ipk_q1 = 0.0;
      this->ipk_q2 = 0.0;
      this->ipk_q3 = 0.0;
    }
  }

  explicit RRRIPK_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ipk_check = false;
      this->ipk_q1 = 0.0;
      this->ipk_q2 = 0.0;
      this->ipk_q3 = 0.0;
    }
  }

  // field types and members
  using _ipk_check_type =
    bool;
  _ipk_check_type ipk_check;
  using _ipk_q1_type =
    double;
  _ipk_q1_type ipk_q1;
  using _ipk_q2_type =
    double;
  _ipk_q2_type ipk_q2;
  using _ipk_q3_type =
    double;
  _ipk_q3_type ipk_q3;

  // setters for named parameter idiom
  Type & set__ipk_check(
    const bool & _arg)
  {
    this->ipk_check = _arg;
    return *this;
  }
  Type & set__ipk_q1(
    const double & _arg)
  {
    this->ipk_q1 = _arg;
    return *this;
  }
  Type & set__ipk_q2(
    const double & _arg)
  {
    this->ipk_q2 = _arg;
    return *this;
  }
  Type & set__ipk_q3(
    const double & _arg)
  {
    this->ipk_q3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRIPK_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRIPK_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRIPK_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRIPK_Response_ & other) const
  {
    if (this->ipk_check != other.ipk_check) {
      return false;
    }
    if (this->ipk_q1 != other.ipk_q1) {
      return false;
    }
    if (this->ipk_q2 != other.ipk_q2) {
      return false;
    }
    if (this->ipk_q3 != other.ipk_q3) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRIPK_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRIPK_Response_

// alias to use template instance with default allocator
using RRRIPK_Response =
  rrr_robot_interfaces::srv::RRRIPK_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rrr_robot_interfaces
{

namespace srv
{

struct RRRIPK
{
  using Request = rrr_robot_interfaces::srv::RRRIPK_Request;
  using Response = rrr_robot_interfaces::srv::RRRIPK_Response;
};

}  // namespace srv

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK__STRUCT_HPP_
