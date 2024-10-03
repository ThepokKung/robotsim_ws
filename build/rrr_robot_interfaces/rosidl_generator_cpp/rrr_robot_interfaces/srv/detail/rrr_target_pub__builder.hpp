// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRTargetPub.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TARGET_PUB__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TARGET_PUB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrr_target_pub__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRTargetPub_Request_q3
{
public:
  explicit Init_RRRTargetPub_Request_q3(::rrr_robot_interfaces::srv::RRRTargetPub_Request & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRTargetPub_Request q3(::rrr_robot_interfaces::srv::RRRTargetPub_Request::_q3_type arg)
  {
    msg_.q3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRTargetPub_Request msg_;
};

class Init_RRRTargetPub_Request_q2
{
public:
  explicit Init_RRRTargetPub_Request_q2(::rrr_robot_interfaces::srv::RRRTargetPub_Request & msg)
  : msg_(msg)
  {}
  Init_RRRTargetPub_Request_q3 q2(::rrr_robot_interfaces::srv::RRRTargetPub_Request::_q2_type arg)
  {
    msg_.q2 = std::move(arg);
    return Init_RRRTargetPub_Request_q3(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRTargetPub_Request msg_;
};

class Init_RRRTargetPub_Request_q1
{
public:
  explicit Init_RRRTargetPub_Request_q1(::rrr_robot_interfaces::srv::RRRTargetPub_Request & msg)
  : msg_(msg)
  {}
  Init_RRRTargetPub_Request_q2 q1(::rrr_robot_interfaces::srv::RRRTargetPub_Request::_q1_type arg)
  {
    msg_.q1 = std::move(arg);
    return Init_RRRTargetPub_Request_q2(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRTargetPub_Request msg_;
};

class Init_RRRTargetPub_Request_goal_pos
{
public:
  explicit Init_RRRTargetPub_Request_goal_pos(::rrr_robot_interfaces::srv::RRRTargetPub_Request & msg)
  : msg_(msg)
  {}
  Init_RRRTargetPub_Request_q1 goal_pos(::rrr_robot_interfaces::srv::RRRTargetPub_Request::_goal_pos_type arg)
  {
    msg_.goal_pos = std::move(arg);
    return Init_RRRTargetPub_Request_q1(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRTargetPub_Request msg_;
};

class Init_RRRTargetPub_Request_run_end
{
public:
  Init_RRRTargetPub_Request_run_end()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRTargetPub_Request_goal_pos run_end(::rrr_robot_interfaces::srv::RRRTargetPub_Request::_run_end_type arg)
  {
    msg_.run_end = std::move(arg);
    return Init_RRRTargetPub_Request_goal_pos(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRTargetPub_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRTargetPub_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRTargetPub_Request_run_end();
}

}  // namespace rrr_robot_interfaces


namespace rrr_robot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRTargetPub_Response>()
{
  return ::rrr_robot_interfaces::srv::RRRTargetPub_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TARGET_PUB__BUILDER_HPP_
