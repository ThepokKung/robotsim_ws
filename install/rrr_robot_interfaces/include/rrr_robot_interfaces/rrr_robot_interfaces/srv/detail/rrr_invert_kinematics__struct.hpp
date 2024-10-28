// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrr_robot_interfaces:srv/RRRInvertKinematics.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_INVERT_KINEMATICS__STRUCT_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_INVERT_KINEMATICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal_pos'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRInvertKinematics_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRInvertKinematics_Request __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRInvertKinematics_Request_
{
  using Type = RRRInvertKinematics_Request_<ContainerAllocator>;

  explicit RRRInvertKinematics_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_pos(_init)
  {
    (void)_init;
  }

  explicit RRRInvertKinematics_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_pos(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _goal_pos_type goal_pos;

  // setters for named parameter idiom
  Type & set__goal_pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->goal_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRInvertKinematics_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRInvertKinematics_Request
    std::shared_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRInvertKinematics_Request_ & other) const
  {
    if (this->goal_pos != other.goal_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRInvertKinematics_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRInvertKinematics_Request_

// alias to use template instance with default allocator
using RRRInvertKinematics_Request =
  rrr_robot_interfaces::srv::RRRInvertKinematics_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__rrr_robot_interfaces__srv__RRRInvertKinematics_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrr_robot_interfaces__srv__RRRInvertKinematics_Response __declspec(deprecated)
#endif

namespace rrr_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRRInvertKinematics_Response_
{
  using Type = RRRInvertKinematics_Response_<ContainerAllocator>;

  explicit RRRInvertKinematics_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ikn_check = false;
      this->q1 = 0.0;
      this->q2 = 0.0;
      this->q3 = 0.0;
    }
  }

  explicit RRRInvertKinematics_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ikn_check = false;
      this->q1 = 0.0;
      this->q2 = 0.0;
      this->q3 = 0.0;
    }
  }

  // field types and members
  using _ikn_check_type =
    bool;
  _ikn_check_type ikn_check;
  using _q1_type =
    double;
  _q1_type q1;
  using _q2_type =
    double;
  _q2_type q2;
  using _q3_type =
    double;
  _q3_type q3;

  // setters for named parameter idiom
  Type & set__ikn_check(
    const bool & _arg)
  {
    this->ikn_check = _arg;
    return *this;
  }
  Type & set__q1(
    const double & _arg)
  {
    this->q1 = _arg;
    return *this;
  }
  Type & set__q2(
    const double & _arg)
  {
    this->q2 = _arg;
    return *this;
  }
  Type & set__q3(
    const double & _arg)
  {
    this->q3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRInvertKinematics_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrr_robot_interfaces__srv__RRRInvertKinematics_Response
    std::shared_ptr<rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRRInvertKinematics_Response_ & other) const
  {
    if (this->ikn_check != other.ikn_check) {
      return false;
    }
    if (this->q1 != other.q1) {
      return false;
    }
    if (this->q2 != other.q2) {
      return false;
    }
    if (this->q3 != other.q3) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRRInvertKinematics_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRRInvertKinematics_Response_

// alias to use template instance with default allocator
using RRRInvertKinematics_Response =
  rrr_robot_interfaces::srv::RRRInvertKinematics_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rrr_robot_interfaces
{

namespace srv
{

struct RRRInvertKinematics
{
  using Request = rrr_robot_interfaces::srv::RRRInvertKinematics_Request;
  using Response = rrr_robot_interfaces::srv::RRRInvertKinematics_Response;
};

}  // namespace srv

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_INVERT_KINEMATICS__STRUCT_HPP_
