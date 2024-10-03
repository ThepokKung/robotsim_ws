// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRRandomTarget.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_RANDOM_TARGET__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_RANDOM_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrr_random_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRRandomTarget_Request_target_call
{
public:
  Init_RRRRandomTarget_Request_target_call()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rrr_robot_interfaces::srv::RRRRandomTarget_Request target_call(::rrr_robot_interfaces::srv::RRRRandomTarget_Request::_target_call_type arg)
  {
    msg_.target_call = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRRandomTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRRandomTarget_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRRandomTarget_Request_target_call();
}

}  // namespace rrr_robot_interfaces


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRRandomTarget_Response_random_target
{
public:
  Init_RRRRandomTarget_Response_random_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rrr_robot_interfaces::srv::RRRRandomTarget_Response random_target(::rrr_robot_interfaces::srv::RRRRandomTarget_Response::_random_target_type arg)
  {
    msg_.random_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRRandomTarget_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRRandomTarget_Response>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRRandomTarget_Response_random_target();
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_RANDOM_TARGET__BUILDER_HPP_
