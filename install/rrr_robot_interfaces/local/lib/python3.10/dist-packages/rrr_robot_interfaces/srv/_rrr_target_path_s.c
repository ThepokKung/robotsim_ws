// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rrr_robot_interfaces:srv/RRRTargetPath.idl
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
#include "rrr_robot_interfaces/srv/detail/rrr_target_path__struct.h"
#include "rrr_robot_interfaces/srv/detail/rrr_target_path__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrr_robot_interfaces__srv__rrr_target_path__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("rrr_robot_interfaces.srv._rrr_target_path.RRRTargetPath_Request", full_classname_dest, 63) == 0);
  }
  rrr_robot_interfaces__srv__RRRTargetPath_Request * ros_message = _ros_message;
  {  // save_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "save_path");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->save_path = (Py_True == field);
    Py_DECREF(field);
  }
  {  // call_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "call_path");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->call_path = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrr_robot_interfaces__srv__rrr_target_path__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RRRTargetPath_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrr_robot_interfaces.srv._rrr_target_path");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RRRTargetPath_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrr_robot_interfaces__srv__RRRTargetPath_Request * ros_message = (rrr_robot_interfaces__srv__RRRTargetPath_Request *)raw_ros_message;
  {  // save_path
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->save_path ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "save_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // call_path
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->call_path ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "call_path", field);
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
// #include "rrr_robot_interfaces/srv/detail/rrr_target_path__struct.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_target_path__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrr_robot_interfaces__srv__rrr_target_path__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("rrr_robot_interfaces.srv._rrr_target_path.RRRTargetPath_Response", full_classname_dest, 64) == 0);
  }
  rrr_robot_interfaces__srv__RRRTargetPath_Response * ros_message = _ros_message;
  {  // all_done
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_done");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->all_done = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrr_robot_interfaces__srv__rrr_target_path__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RRRTargetPath_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrr_robot_interfaces.srv._rrr_target_path");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RRRTargetPath_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrr_robot_interfaces__srv__RRRTargetPath_Response * ros_message = (rrr_robot_interfaces__srv__RRRTargetPath_Response *)raw_ros_message;
  {  // all_done
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->all_done ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_done", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
