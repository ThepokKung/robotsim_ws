// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRAuto.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrr_auto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRAuto_Request_auto_run
{
public:
  Init_RRRAuto_Request_auto_run()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rrr_robot_interfaces::srv::RRRAuto_Request auto_run(::rrr_robot_interfaces::srv::RRRAuto_Request::_auto_run_type arg)
  {
    msg_.auto_run = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRAuto_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRAuto_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRAuto_Request_auto_run();
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
auto build<::rrr_robot_interfaces::srv::RRRAuto_Response>()
{
  return ::rrr_robot_interfaces::srv::RRRAuto_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__BUILDER_HPP_
