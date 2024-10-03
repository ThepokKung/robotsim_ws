// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRTeleop.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TELEOP__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TELEOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrr_teleop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRTeleop_Request_teleop_target
{
public:
  explicit Init_RRRTeleop_Request_teleop_target(::rrr_robot_interfaces::srv::RRRTeleop_Request & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRTeleop_Request teleop_target(::rrr_robot_interfaces::srv::RRRTeleop_Request::_teleop_target_type arg)
  {
    msg_.teleop_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRTeleop_Request msg_;
};

class Init_RRRTeleop_Request_ref_frame
{
public:
  Init_RRRTeleop_Request_ref_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRTeleop_Request_teleop_target ref_frame(::rrr_robot_interfaces::srv::RRRTeleop_Request::_ref_frame_type arg)
  {
    msg_.ref_frame = std::move(arg);
    return Init_RRRTeleop_Request_teleop_target(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRTeleop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRTeleop_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRTeleop_Request_ref_frame();
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
auto build<::rrr_robot_interfaces::srv::RRRTeleop_Response>()
{
  return ::rrr_robot_interfaces::srv::RRRTeleop_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TELEOP__BUILDER_HPP_
