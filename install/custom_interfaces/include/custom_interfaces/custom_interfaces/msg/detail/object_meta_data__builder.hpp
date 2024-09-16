// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/ObjectMetaData.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__OBJECT_META_DATA__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__OBJECT_META_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/object_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectMetaData_graspable
{
public:
  explicit Init_ObjectMetaData_graspable(::custom_interfaces::msg::ObjectMetaData & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::ObjectMetaData graspable(::custom_interfaces::msg::ObjectMetaData::_graspable_type arg)
  {
    msg_.graspable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::ObjectMetaData msg_;
};

class Init_ObjectMetaData_size
{
public:
  explicit Init_ObjectMetaData_size(::custom_interfaces::msg::ObjectMetaData & msg)
  : msg_(msg)
  {}
  Init_ObjectMetaData_graspable size(::custom_interfaces::msg::ObjectMetaData::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_ObjectMetaData_graspable(msg_);
  }

private:
  ::custom_interfaces::msg::ObjectMetaData msg_;
};

class Init_ObjectMetaData_orientation
{
public:
  explicit Init_ObjectMetaData_orientation(::custom_interfaces::msg::ObjectMetaData & msg)
  : msg_(msg)
  {}
  Init_ObjectMetaData_size orientation(::custom_interfaces::msg::ObjectMetaData::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_ObjectMetaData_size(msg_);
  }

private:
  ::custom_interfaces::msg::ObjectMetaData msg_;
};

class Init_ObjectMetaData_position
{
public:
  explicit Init_ObjectMetaData_position(::custom_interfaces::msg::ObjectMetaData & msg)
  : msg_(msg)
  {}
  Init_ObjectMetaData_orientation position(::custom_interfaces::msg::ObjectMetaData::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ObjectMetaData_orientation(msg_);
  }

private:
  ::custom_interfaces::msg::ObjectMetaData msg_;
};

class Init_ObjectMetaData_object_type
{
public:
  explicit Init_ObjectMetaData_object_type(::custom_interfaces::msg::ObjectMetaData & msg)
  : msg_(msg)
  {}
  Init_ObjectMetaData_position object_type(::custom_interfaces::msg::ObjectMetaData::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_ObjectMetaData_position(msg_);
  }

private:
  ::custom_interfaces::msg::ObjectMetaData msg_;
};

class Init_ObjectMetaData_object_id
{
public:
  Init_ObjectMetaData_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectMetaData_object_type object_id(::custom_interfaces::msg::ObjectMetaData::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_ObjectMetaData_object_type(msg_);
  }

private:
  ::custom_interfaces::msg::ObjectMetaData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::ObjectMetaData>()
{
  return custom_interfaces::msg::builder::Init_ObjectMetaData_object_id();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__OBJECT_META_DATA__BUILDER_HPP_
