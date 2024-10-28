// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRInvertKinematics.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_INVERT_KINEMATICS__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_INVERT_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrr_invert_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRInvertKinematics_Request_goal_pos
{
public:
  Init_RRRInvertKinematics_Request_goal_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rrr_robot_interfaces::srv::RRRInvertKinematics_Request goal_pos(::rrr_robot_interfaces::srv::RRRInvertKinematics_Request::_goal_pos_type arg)
  {
    msg_.goal_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRInvertKinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRInvertKinematics_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRInvertKinematics_Request_goal_pos();
}

}  // namespace rrr_robot_interfaces


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRInvertKinematics_Response_q3
{
public:
  explicit Init_RRRInvertKinematics_Response_q3(::rrr_robot_interfaces::srv::RRRInvertKinematics_Response & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRInvertKinematics_Response q3(::rrr_robot_interfaces::srv::RRRInvertKinematics_Response::_q3_type arg)
  {
    msg_.q3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRInvertKinematics_Response msg_;
};

class Init_RRRInvertKinematics_Response_q2
{
public:
  explicit Init_RRRInvertKinematics_Response_q2(::rrr_robot_interfaces::srv::RRRInvertKinematics_Response & msg)
  : msg_(msg)
  {}
  Init_RRRInvertKinematics_Response_q3 q2(::rrr_robot_interfaces::srv::RRRInvertKinematics_Response::_q2_type arg)
  {
    msg_.q2 = std::move(arg);
    return Init_RRRInvertKinematics_Response_q3(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRInvertKinematics_Response msg_;
};

class Init_RRRInvertKinematics_Response_q1
{
public:
  explicit Init_RRRInvertKinematics_Response_q1(::rrr_robot_interfaces::srv::RRRInvertKinematics_Response & msg)
  : msg_(msg)
  {}
  Init_RRRInvertKinematics_Response_q2 q1(::rrr_robot_interfaces::srv::RRRInvertKinematics_Response::_q1_type arg)
  {
    msg_.q1 = std::move(arg);
    return Init_RRRInvertKinematics_Response_q2(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRInvertKinematics_Response msg_;
};

class Init_RRRInvertKinematics_Response_ikn_check
{
public:
  Init_RRRInvertKinematics_Response_ikn_check()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRInvertKinematics_Response_q1 ikn_check(::rrr_robot_interfaces::srv::RRRInvertKinematics_Response::_ikn_check_type arg)
  {
    msg_.ikn_check = std::move(arg);
    return Init_RRRInvertKinematics_Response_q1(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRInvertKinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRInvertKinematics_Response>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRInvertKinematics_Response_ikn_check();
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_INVERT_KINEMATICS__BUILDER_HPP_
