// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRIPKTarget.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK_TARGET__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrripk_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRIPKTarget_Request_ipk_target
{
public:
  Init_RRRIPKTarget_Request_ipk_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rrr_robot_interfaces::srv::RRRIPKTarget_Request ipk_target(::rrr_robot_interfaces::srv::RRRIPKTarget_Request::_ipk_target_type arg)
  {
    msg_.ipk_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPKTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRIPKTarget_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRIPKTarget_Request_ipk_target();
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
auto build<::rrr_robot_interfaces::srv::RRRIPKTarget_Response>()
{
  return ::rrr_robot_interfaces::srv::RRRIPKTarget_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK_TARGET__BUILDER_HPP_
