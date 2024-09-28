# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rrr_robot_interfaces:srv/RRRService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RRRService_Request(type):
    """Metaclass of message 'RRRService_Request'."""

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
                'rrr_robot_interfaces.srv.RRRService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrr_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrr_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrr_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrr_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrr_service__request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRService_Request(metaclass=Metaclass_RRRService_Request):
    """Message class 'RRRService_Request'."""

    __slots__ = [
        '_mode_call',
        '_target',
        '_ipk_mode',
    ]

    _fields_and_field_types = {
        'mode_call': 'string',
        'target': 'geometry_msgs/PoseStamped',
        'ipk_mode': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode_call = kwargs.get('mode_call', str())
        from geometry_msgs.msg import PoseStamped
        self.target = kwargs.get('target', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.ipk_mode = kwargs.get('ipk_mode', PoseStamped())

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
        if self.mode_call != other.mode_call:
            return False
        if self.target != other.target:
            return False
        if self.ipk_mode != other.ipk_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode_call(self):
        """Message field 'mode_call'."""
        return self._mode_call

    @mode_call.setter
    def mode_call(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode_call' field must be of type 'str'"
        self._mode_call = value

    @builtins.property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target' field must be a sub message of type 'PoseStamped'"
        self._target = value

    @builtins.property
    def ipk_mode(self):
        """Message field 'ipk_mode'."""
        return self._ipk_mode

    @ipk_mode.setter
    def ipk_mode(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'ipk_mode' field must be a sub message of type 'PoseStamped'"
        self._ipk_mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RRRService_Response(type):
    """Metaclass of message 'RRRService_Response'."""

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
                'rrr_robot_interfaces.srv.RRRService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrr_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrr_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrr_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrr_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrr_service__response

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRService_Response(metaclass=Metaclass_RRRService_Response):
    """Message class 'RRRService_Response'."""

    __slots__ = [
        '_mode_change',
        '_ipk_check',
        '_ipk_sol',
    ]

    _fields_and_field_types = {
        'mode_change': 'boolean',
        'ipk_check': 'boolean',
        'ipk_sol': 'sensor_msgs/JointState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode_change = kwargs.get('mode_change', bool())
        self.ipk_check = kwargs.get('ipk_check', bool())
        from sensor_msgs.msg import JointState
        self.ipk_sol = kwargs.get('ipk_sol', JointState())

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
        if self.mode_change != other.mode_change:
            return False
        if self.ipk_check != other.ipk_check:
            return False
        if self.ipk_sol != other.ipk_sol:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode_change(self):
        """Message field 'mode_change'."""
        return self._mode_change

    @mode_change.setter
    def mode_change(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_change' field must be of type 'bool'"
        self._mode_change = value

    @builtins.property
    def ipk_check(self):
        """Message field 'ipk_check'."""
        return self._ipk_check

    @ipk_check.setter
    def ipk_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ipk_check' field must be of type 'bool'"
        self._ipk_check = value

    @builtins.property
    def ipk_sol(self):
        """Message field 'ipk_sol'."""
        return self._ipk_sol

    @ipk_sol.setter
    def ipk_sol(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'ipk_sol' field must be a sub message of type 'JointState'"
        self._ipk_sol = value


class Metaclass_RRRService(type):
    """Metaclass of service 'RRRService'."""

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
                'rrr_robot_interfaces.srv.RRRService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rrr_service

            from rrr_robot_interfaces.srv import _rrr_service
            if _rrr_service.Metaclass_RRRService_Request._TYPE_SUPPORT is None:
                _rrr_service.Metaclass_RRRService_Request.__import_type_support__()
            if _rrr_service.Metaclass_RRRService_Response._TYPE_SUPPORT is None:
                _rrr_service.Metaclass_RRRService_Response.__import_type_support__()


class RRRService(metaclass=Metaclass_RRRService):
    from rrr_robot_interfaces.srv._rrr_service import RRRService_Request as Request
    from rrr_robot_interfaces.srv._rrr_service import RRRService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
