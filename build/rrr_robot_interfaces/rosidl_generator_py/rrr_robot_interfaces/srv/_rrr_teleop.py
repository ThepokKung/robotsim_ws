# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rrr_robot_interfaces:srv/RRRTeleop.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RRRTeleop_Request(type):
    """Metaclass of message 'RRRTeleop_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rrr_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rrr_robot_interfaces.srv.RRRTeleop_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrr_teleop__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrr_teleop__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrr_teleop__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrr_teleop__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrr_teleop__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRTeleop_Request(metaclass=Metaclass_RRRTeleop_Request):
    """Message class 'RRRTeleop_Request'."""

    __slots__ = [
        '_teleop_run',
        '_frame_ref',
    ]

    _fields_and_field_types = {
        'teleop_run': 'boolean',
        'frame_ref': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.teleop_run = kwargs.get('teleop_run', bool())
        self.frame_ref = kwargs.get('frame_ref', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.teleop_run != other.teleop_run:
            return False
        if self.frame_ref != other.frame_ref:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def teleop_run(self):
        """Message field 'teleop_run'."""
        return self._teleop_run

    @teleop_run.setter
    def teleop_run(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'teleop_run' field must be of type 'bool'"
        self._teleop_run = value

    @builtins.property
    def frame_ref(self):
        """Message field 'frame_ref'."""
        return self._frame_ref

    @frame_ref.setter
    def frame_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frame_ref' field must be of type 'str'"
        self._frame_ref = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RRRTeleop_Response(type):
    """Metaclass of message 'RRRTeleop_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rrr_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rrr_robot_interfaces.srv.RRRTeleop_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrr_teleop__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrr_teleop__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrr_teleop__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrr_teleop__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrr_teleop__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRTeleop_Response(metaclass=Metaclass_RRRTeleop_Response):
    """Message class 'RRRTeleop_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_RRRTeleop(type):
    """Metaclass of service 'RRRTeleop'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rrr_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rrr_robot_interfaces.srv.RRRTeleop')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rrr_teleop

            from rrr_robot_interfaces.srv import _rrr_teleop
            if _rrr_teleop.Metaclass_RRRTeleop_Request._TYPE_SUPPORT is None:
                _rrr_teleop.Metaclass_RRRTeleop_Request.__import_type_support__()
            if _rrr_teleop.Metaclass_RRRTeleop_Response._TYPE_SUPPORT is None:
                _rrr_teleop.Metaclass_RRRTeleop_Response.__import_type_support__()


class RRRTeleop(metaclass=Metaclass_RRRTeleop):
    from rrr_robot_interfaces.srv._rrr_teleop import RRRTeleop_Request as Request
    from rrr_robot_interfaces.srv._rrr_teleop import RRRTeleop_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
