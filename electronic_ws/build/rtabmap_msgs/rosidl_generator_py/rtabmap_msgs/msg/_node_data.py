# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:msg/NodeData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'image'
# Member 'depth'
# Member 'fx'
# Member 'fy'
# Member 'cx'
# Member 'cy'
# Member 'width'
# Member 'height'
# Member 'baseline'
# Member 'laser_scan'
# Member 'user_data'
# Member 'grid_ground'
# Member 'grid_obstacles'
# Member 'grid_empty_cells'
# Member 'word_id_keys'
# Member 'word_id_values'
# Member 'word_descriptors'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeData(type):
    """Metaclass of message 'NodeData'."""

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
            module = import_type_support('rtabmap_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtabmap_msgs.msg.NodeData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_data

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

            from rtabmap_msgs.msg import EnvSensor
            if EnvSensor.__class__._TYPE_SUPPORT is None:
                EnvSensor.__class__.__import_type_support__()

            from rtabmap_msgs.msg import GPS
            if GPS.__class__._TYPE_SUPPORT is None:
                GPS.__class__.__import_type_support__()

            from rtabmap_msgs.msg import GlobalDescriptor
            if GlobalDescriptor.__class__._TYPE_SUPPORT is None:
                GlobalDescriptor.__class__.__import_type_support__()

            from rtabmap_msgs.msg import KeyPoint
            if KeyPoint.__class__._TYPE_SUPPORT is None:
                KeyPoint.__class__.__import_type_support__()

            from rtabmap_msgs.msg import Point3f
            if Point3f.__class__._TYPE_SUPPORT is None:
                Point3f.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeData(metaclass=Metaclass_NodeData):
    """Message class 'NodeData'."""

    __slots__ = [
        '_id',
        '_map_id',
        '_weight',
        '_stamp',
        '_label',
        '_pose',
        '_ground_truth_pose',
        '_gps',
        '_image',
        '_depth',
        '_fx',
        '_fy',
        '_cx',
        '_cy',
        '_width',
        '_height',
        '_baseline',
        '_local_transform',
        '_laser_scan',
        '_laser_scan_max_pts',
        '_laser_scan_max_range',
        '_laser_scan_format',
        '_laser_scan_local_transform',
        '_user_data',
        '_grid_ground',
        '_grid_obstacles',
        '_grid_empty_cells',
        '_grid_cell_size',
        '_grid_view_point',
        '_word_id_keys',
        '_word_id_values',
        '_word_kpts',
        '_word_pts',
        '_word_descriptors',
        '_global_descriptors',
        '_env_sensors',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'map_id': 'int32',
        'weight': 'int32',
        'stamp': 'double',
        'label': 'string',
        'pose': 'geometry_msgs/Pose',
        'ground_truth_pose': 'geometry_msgs/Pose',
        'gps': 'rtabmap_msgs/GPS',
        'image': 'sequence<uint8>',
        'depth': 'sequence<uint8>',
        'fx': 'sequence<float>',
        'fy': 'sequence<float>',
        'cx': 'sequence<float>',
        'cy': 'sequence<float>',
        'width': 'sequence<float>',
        'height': 'sequence<float>',
        'baseline': 'sequence<float>',
        'local_transform': 'sequence<geometry_msgs/Transform>',
        'laser_scan': 'sequence<uint8>',
        'laser_scan_max_pts': 'int32',
        'laser_scan_max_range': 'float',
        'laser_scan_format': 'int32',
        'laser_scan_local_transform': 'geometry_msgs/Transform',
        'user_data': 'sequence<uint8>',
        'grid_ground': 'sequence<uint8>',
        'grid_obstacles': 'sequence<uint8>',
        'grid_empty_cells': 'sequence<uint8>',
        'grid_cell_size': 'float',
        'grid_view_point': 'rtabmap_msgs/Point3f',
        'word_id_keys': 'sequence<int32>',
        'word_id_values': 'sequence<int32>',
        'word_kpts': 'sequence<rtabmap_msgs/KeyPoint>',
        'word_pts': 'sequence<rtabmap_msgs/Point3f>',
        'word_descriptors': 'sequence<uint8>',
        'global_descriptors': 'sequence<rtabmap_msgs/GlobalDescriptor>',
        'env_sensors': 'sequence<rtabmap_msgs/EnvSensor>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'GPS'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point3f'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'KeyPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point3f')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'GlobalDescriptor')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'EnvSensor')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.map_id = kwargs.get('map_id', int())
        self.weight = kwargs.get('weight', int())
        self.stamp = kwargs.get('stamp', float())
        self.label = kwargs.get('label', str())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Pose
        self.ground_truth_pose = kwargs.get('ground_truth_pose', Pose())
        from rtabmap_msgs.msg import GPS
        self.gps = kwargs.get('gps', GPS())
        self.image = array.array('B', kwargs.get('image', []))
        self.depth = array.array('B', kwargs.get('depth', []))
        self.fx = array.array('f', kwargs.get('fx', []))
        self.fy = array.array('f', kwargs.get('fy', []))
        self.cx = array.array('f', kwargs.get('cx', []))
        self.cy = array.array('f', kwargs.get('cy', []))
        self.width = array.array('f', kwargs.get('width', []))
        self.height = array.array('f', kwargs.get('height', []))
        self.baseline = array.array('f', kwargs.get('baseline', []))
        self.local_transform = kwargs.get('local_transform', [])
        self.laser_scan = array.array('B', kwargs.get('laser_scan', []))
        self.laser_scan_max_pts = kwargs.get('laser_scan_max_pts', int())
        self.laser_scan_max_range = kwargs.get('laser_scan_max_range', float())
        self.laser_scan_format = kwargs.get('laser_scan_format', int())
        from geometry_msgs.msg import Transform
        self.laser_scan_local_transform = kwargs.get('laser_scan_local_transform', Transform())
        self.user_data = array.array('B', kwargs.get('user_data', []))
        self.grid_ground = array.array('B', kwargs.get('grid_ground', []))
        self.grid_obstacles = array.array('B', kwargs.get('grid_obstacles', []))
        self.grid_empty_cells = array.array('B', kwargs.get('grid_empty_cells', []))
        self.grid_cell_size = kwargs.get('grid_cell_size', float())
        from rtabmap_msgs.msg import Point3f
        self.grid_view_point = kwargs.get('grid_view_point', Point3f())
        self.word_id_keys = array.array('i', kwargs.get('word_id_keys', []))
        self.word_id_values = array.array('i', kwargs.get('word_id_values', []))
        self.word_kpts = kwargs.get('word_kpts', [])
        self.word_pts = kwargs.get('word_pts', [])
        self.word_descriptors = array.array('B', kwargs.get('word_descriptors', []))
        self.global_descriptors = kwargs.get('global_descriptors', [])
        self.env_sensors = kwargs.get('env_sensors', [])

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
        if self.id != other.id:
            return False
        if self.map_id != other.map_id:
            return False
        if self.weight != other.weight:
            return False
        if self.stamp != other.stamp:
            return False
        if self.label != other.label:
            return False
        if self.pose != other.pose:
            return False
        if self.ground_truth_pose != other.ground_truth_pose:
            return False
        if self.gps != other.gps:
            return False
        if self.image != other.image:
            return False
        if self.depth != other.depth:
            return False
        if self.fx != other.fx:
            return False
        if self.fy != other.fy:
            return False
        if self.cx != other.cx:
            return False
        if self.cy != other.cy:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.baseline != other.baseline:
            return False
        if self.local_transform != other.local_transform:
            return False
        if self.laser_scan != other.laser_scan:
            return False
        if self.laser_scan_max_pts != other.laser_scan_max_pts:
            return False
        if self.laser_scan_max_range != other.laser_scan_max_range:
            return False
        if self.laser_scan_format != other.laser_scan_format:
            return False
        if self.laser_scan_local_transform != other.laser_scan_local_transform:
            return False
        if self.user_data != other.user_data:
            return False
        if self.grid_ground != other.grid_ground:
            return False
        if self.grid_obstacles != other.grid_obstacles:
            return False
        if self.grid_empty_cells != other.grid_empty_cells:
            return False
        if self.grid_cell_size != other.grid_cell_size:
            return False
        if self.grid_view_point != other.grid_view_point:
            return False
        if self.word_id_keys != other.word_id_keys:
            return False
        if self.word_id_values != other.word_id_values:
            return False
        if self.word_kpts != other.word_kpts:
            return False
        if self.word_pts != other.word_pts:
            return False
        if self.word_descriptors != other.word_descriptors:
            return False
        if self.global_descriptors != other.global_descriptors:
            return False
        if self.env_sensors != other.env_sensors:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @property
    def map_id(self):
        """Message field 'map_id'."""
        return self._map_id

    @map_id.setter
    def map_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'map_id' field must be an integer in [-2147483648, 2147483647]"
        self._map_id = value

    @property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'weight' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'weight' field must be an integer in [-2147483648, 2147483647]"
        self._weight = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stamp' field must be of type 'float'"
        self._stamp = value

    @property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @property
    def ground_truth_pose(self):
        """Message field 'ground_truth_pose'."""
        return self._ground_truth_pose

    @ground_truth_pose.setter
    def ground_truth_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'ground_truth_pose' field must be a sub message of type 'Pose'"
        self._ground_truth_pose = value

    @property
    def gps(self):
        """Message field 'gps'."""
        return self._gps

    @gps.setter
    def gps(self, value):
        if __debug__:
            from rtabmap_msgs.msg import GPS
            assert \
                isinstance(value, GPS), \
                "The 'gps' field must be a sub message of type 'GPS'"
        self._gps = value

    @property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'image' array.array() must have the type code of 'B'"
            self._image = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'image' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._image = array.array('B', value)

    @property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'depth' array.array() must have the type code of 'B'"
            self._depth = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'depth' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._depth = array.array('B', value)

    @property
    def fx(self):
        """Message field 'fx'."""
        return self._fx

    @fx.setter
    def fx(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'fx' array.array() must have the type code of 'f'"
            self._fx = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'fx' field must be a set or sequence and each value of type 'float'"
        self._fx = array.array('f', value)

    @property
    def fy(self):
        """Message field 'fy'."""
        return self._fy

    @fy.setter
    def fy(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'fy' array.array() must have the type code of 'f'"
            self._fy = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'fy' field must be a set or sequence and each value of type 'float'"
        self._fy = array.array('f', value)

    @property
    def cx(self):
        """Message field 'cx'."""
        return self._cx

    @cx.setter
    def cx(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'cx' array.array() must have the type code of 'f'"
            self._cx = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'cx' field must be a set or sequence and each value of type 'float'"
        self._cx = array.array('f', value)

    @property
    def cy(self):
        """Message field 'cy'."""
        return self._cy

    @cy.setter
    def cy(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'cy' array.array() must have the type code of 'f'"
            self._cy = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'cy' field must be a set or sequence and each value of type 'float'"
        self._cy = array.array('f', value)

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'width' array.array() must have the type code of 'f'"
            self._width = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'width' field must be a set or sequence and each value of type 'float'"
        self._width = array.array('f', value)

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'height' array.array() must have the type code of 'f'"
            self._height = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'height' field must be a set or sequence and each value of type 'float'"
        self._height = array.array('f', value)

    @property
    def baseline(self):
        """Message field 'baseline'."""
        return self._baseline

    @baseline.setter
    def baseline(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'baseline' array.array() must have the type code of 'f'"
            self._baseline = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'baseline' field must be a set or sequence and each value of type 'float'"
        self._baseline = array.array('f', value)

    @property
    def local_transform(self):
        """Message field 'local_transform'."""
        return self._local_transform

    @local_transform.setter
    def local_transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Transform) for v in value) and
                 True), \
                "The 'local_transform' field must be a set or sequence and each value of type 'Transform'"
        self._local_transform = value

    @property
    def laser_scan(self):
        """Message field 'laser_scan'."""
        return self._laser_scan

    @laser_scan.setter
    def laser_scan(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'laser_scan' array.array() must have the type code of 'B'"
            self._laser_scan = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'laser_scan' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._laser_scan = array.array('B', value)

    @property
    def laser_scan_max_pts(self):
        """Message field 'laser_scan_max_pts'."""
        return self._laser_scan_max_pts

    @laser_scan_max_pts.setter
    def laser_scan_max_pts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laser_scan_max_pts' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'laser_scan_max_pts' field must be an integer in [-2147483648, 2147483647]"
        self._laser_scan_max_pts = value

    @property
    def laser_scan_max_range(self):
        """Message field 'laser_scan_max_range'."""
        return self._laser_scan_max_range

    @laser_scan_max_range.setter
    def laser_scan_max_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'laser_scan_max_range' field must be of type 'float'"
        self._laser_scan_max_range = value

    @property
    def laser_scan_format(self):
        """Message field 'laser_scan_format'."""
        return self._laser_scan_format

    @laser_scan_format.setter
    def laser_scan_format(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laser_scan_format' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'laser_scan_format' field must be an integer in [-2147483648, 2147483647]"
        self._laser_scan_format = value

    @property
    def laser_scan_local_transform(self):
        """Message field 'laser_scan_local_transform'."""
        return self._laser_scan_local_transform

    @laser_scan_local_transform.setter
    def laser_scan_local_transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'laser_scan_local_transform' field must be a sub message of type 'Transform'"
        self._laser_scan_local_transform = value

    @property
    def user_data(self):
        """Message field 'user_data'."""
        return self._user_data

    @user_data.setter
    def user_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'user_data' array.array() must have the type code of 'B'"
            self._user_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'user_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._user_data = array.array('B', value)

    @property
    def grid_ground(self):
        """Message field 'grid_ground'."""
        return self._grid_ground

    @grid_ground.setter
    def grid_ground(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'grid_ground' array.array() must have the type code of 'B'"
            self._grid_ground = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'grid_ground' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._grid_ground = array.array('B', value)

    @property
    def grid_obstacles(self):
        """Message field 'grid_obstacles'."""
        return self._grid_obstacles

    @grid_obstacles.setter
    def grid_obstacles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'grid_obstacles' array.array() must have the type code of 'B'"
            self._grid_obstacles = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'grid_obstacles' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._grid_obstacles = array.array('B', value)

    @property
    def grid_empty_cells(self):
        """Message field 'grid_empty_cells'."""
        return self._grid_empty_cells

    @grid_empty_cells.setter
    def grid_empty_cells(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'grid_empty_cells' array.array() must have the type code of 'B'"
            self._grid_empty_cells = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'grid_empty_cells' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._grid_empty_cells = array.array('B', value)

    @property
    def grid_cell_size(self):
        """Message field 'grid_cell_size'."""
        return self._grid_cell_size

    @grid_cell_size.setter
    def grid_cell_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'grid_cell_size' field must be of type 'float'"
        self._grid_cell_size = value

    @property
    def grid_view_point(self):
        """Message field 'grid_view_point'."""
        return self._grid_view_point

    @grid_view_point.setter
    def grid_view_point(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Point3f
            assert \
                isinstance(value, Point3f), \
                "The 'grid_view_point' field must be a sub message of type 'Point3f'"
        self._grid_view_point = value

    @property
    def word_id_keys(self):
        """Message field 'word_id_keys'."""
        return self._word_id_keys

    @word_id_keys.setter
    def word_id_keys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'word_id_keys' array.array() must have the type code of 'i'"
            self._word_id_keys = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'word_id_keys' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._word_id_keys = array.array('i', value)

    @property
    def word_id_values(self):
        """Message field 'word_id_values'."""
        return self._word_id_values

    @word_id_values.setter
    def word_id_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'word_id_values' array.array() must have the type code of 'i'"
            self._word_id_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'word_id_values' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._word_id_values = array.array('i', value)

    @property
    def word_kpts(self):
        """Message field 'word_kpts'."""
        return self._word_kpts

    @word_kpts.setter
    def word_kpts(self, value):
        if __debug__:
            from rtabmap_msgs.msg import KeyPoint
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, KeyPoint) for v in value) and
                 True), \
                "The 'word_kpts' field must be a set or sequence and each value of type 'KeyPoint'"
        self._word_kpts = value

    @property
    def word_pts(self):
        """Message field 'word_pts'."""
        return self._word_pts

    @word_pts.setter
    def word_pts(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Point3f
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point3f) for v in value) and
                 True), \
                "The 'word_pts' field must be a set or sequence and each value of type 'Point3f'"
        self._word_pts = value

    @property
    def word_descriptors(self):
        """Message field 'word_descriptors'."""
        return self._word_descriptors

    @word_descriptors.setter
    def word_descriptors(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'word_descriptors' array.array() must have the type code of 'B'"
            self._word_descriptors = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'word_descriptors' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._word_descriptors = array.array('B', value)

    @property
    def global_descriptors(self):
        """Message field 'global_descriptors'."""
        return self._global_descriptors

    @global_descriptors.setter
    def global_descriptors(self, value):
        if __debug__:
            from rtabmap_msgs.msg import GlobalDescriptor
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, GlobalDescriptor) for v in value) and
                 True), \
                "The 'global_descriptors' field must be a set or sequence and each value of type 'GlobalDescriptor'"
        self._global_descriptors = value

    @property
    def env_sensors(self):
        """Message field 'env_sensors'."""
        return self._env_sensors

    @env_sensors.setter
    def env_sensors(self, value):
        if __debug__:
            from rtabmap_msgs.msg import EnvSensor
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, EnvSensor) for v in value) and
                 True), \
                "The 'env_sensors' field must be a set or sequence and each value of type 'EnvSensor'"
        self._env_sensors = value
