// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rrr_robot_interfaces:srv/RRRTargetPub.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rrr_robot_interfaces/srv/detail/rrr_target_pub__struct.h"
#include "rrr_robot_interfaces/srv/detail/rrr_target_pub__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rrr_robot_interfaces__srv__rrr_target_pub__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rrr_robot_interfaces.srv._rrr_target_pub.RRRTargetPub_Request", full_classname_dest, 61) == 0);
  }
  rrr_robot_interfaces__srv__RRRTargetPub_Request * ros_message = _ros_message;
  {  // run_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_end");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_end = (Py_True == field);
    Py_DECREF(field);
  }
  {  // goal_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_pos");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->goal_pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // q1
    PyObject * field = PyObject_GetAttrString(_pymsg, "q1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q2
    PyObject * field = PyObject_GetAttrString(_pymsg, "q2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q3
    PyObject * field = PyObject_GetAttrString(_pymsg, "q3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrr_robot_interfaces__srv__rrr_target_pub__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RRRTargetPub_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrr_robot_interfaces.srv._rrr_target_pub");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RRRTargetPub_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrr_robot_interfaces__srv__RRRTargetPub_Request * ros_message = (rrr_robot_interfaces__srv__RRRTargetPub_Request *)raw_ros_message;
  {  // run_end
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_end ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_pos
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->goal_pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_target_pub__struct.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_target_pub__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrr_robot_interfaces__srv__rrr_target_pub__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rrr_robot_interfaces.srv._rrr_target_pub.RRRTargetPub_Response", full_classname_dest, 62) == 0);
  }
  rrr_robot_interfaces__srv__RRRTargetPub_Response * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrr_robot_interfaces__srv__rrr_target_pub__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RRRTargetPub_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrr_robot_interfaces.srv._rrr_target_pub");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RRRTargetPub_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
