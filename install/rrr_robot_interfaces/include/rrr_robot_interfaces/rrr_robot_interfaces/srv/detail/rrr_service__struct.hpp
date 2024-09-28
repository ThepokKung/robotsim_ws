// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrr_robot_interfaces:srv/RRRService.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SERVICE__STRUCT_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
// Member 'ipk_mode'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRService_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRService_Request __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRService_Request_
{
  using Type = RRRService_Request_<ContainerAllocator>;

  explicit RRRService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init),
    ipk_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_call = "";
    }
  }

  explicit RRRService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode_call(_alloc),
    target(_alloc, _init),
    ipk_mode(_alloc, _init)
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
  using _target_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_type target;
  using _ipk_mode_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _ipk_mode_type ipk_mode;

  // setters for named parameter idiom
  Type & set__mode_call(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode_call = _arg;
    return *this;
  }
  Type & set__target(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__ipk_mode(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->ipk_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRService_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRService_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRService_Request_ & other) const
  {
    if (this->mode_call != other.mode_call) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->ipk_mode != other.ipk_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRService_Request_

// alias to use template instance with default allocator
using RRRService_Request =
  rrr_robot_interfaces::srv::RRRService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces


// Include directives for member types
// Member 'ipk_sol'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRService_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRService_Response __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRService_Response_
{
  using Type = RRRService_Response_<ContainerAllocator>;

  explicit RRRService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ipk_sol(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_change = false;
      this->ipk_check = false;
    }
  }

  explicit RRRService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ipk_sol(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_change = false;
      this->ipk_check = false;
    }
  }

  // field types and members
  using _mode_change_type =
    bool;
  _mode_change_type mode_change;
  using _ipk_check_type =
    bool;
  _ipk_check_type ipk_check;
  using _ipk_sol_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _ipk_sol_type ipk_sol;

  // setters for named parameter idiom
  Type & set__mode_change(
    const bool & _arg)
  {
    this->mode_change = _arg;
    return *this;
  }
  Type & set__ipk_check(
    const bool & _arg)
  {
    this->ipk_check = _arg;
    return *this;
  }
  Type & set__ipk_sol(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->ipk_sol = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRService_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRService_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRService_Response_ & other) const
  {
    if (this->mode_change != other.mode_change) {
      return false;
    }
    if (this->ipk_check != other.ipk_check) {
      return false;
    }
    if (this->ipk_sol != other.ipk_sol) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRService_Response_

// alias to use template instance with default allocator
using RRRService_Response =
  rrr_robot_interfaces::srv::RRRService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rrr_robot_interfaces
{

namespace srv
{

struct RRRService
{
  using Request = rrr_robot_interfaces::srv::RRRService_Request;
  using Response = rrr_robot_interfaces::srv::RRRService_Response;
};

}  // namespace srv

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SERVICE__STRUCT_HPP_
