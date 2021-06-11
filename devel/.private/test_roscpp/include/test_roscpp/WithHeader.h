// Generated by gencpp from file test_roscpp/WithHeader.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_WITHHEADER_H
#define TEST_ROSCPP_MESSAGE_WITHHEADER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace test_roscpp
{
template <class ContainerAllocator>
struct WithHeader_
{
  typedef WithHeader_<ContainerAllocator> Type;

  WithHeader_()
    : header()
    , a(0)  {
    }
  WithHeader_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , a(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _a_type;
  _a_type a;





  typedef boost::shared_ptr< ::test_roscpp::WithHeader_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::WithHeader_<ContainerAllocator> const> ConstPtr;

}; // struct WithHeader_

typedef ::test_roscpp::WithHeader_<std::allocator<void> > WithHeader;

typedef boost::shared_ptr< ::test_roscpp::WithHeader > WithHeaderPtr;
typedef boost::shared_ptr< ::test_roscpp::WithHeader const> WithHeaderConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::WithHeader_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::WithHeader_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'rosgraph_msgs': ['/opt/ros/melodic/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/test/msg', '/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/test_serialization/msg', '/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/perf/msg', '/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/home/student/rosws/src/std_msgs-kinetic-devel/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::WithHeader_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::WithHeader_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::WithHeader_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::WithHeader_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::WithHeader_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::WithHeader_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::WithHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea0b9ad283b0d4dcc850b560da7b6965";
  }

  static const char* value(const ::test_roscpp::WithHeader_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea0b9ad283b0d4dcULL;
  static const uint64_t static_value2 = 0xc850b560da7b6965ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::WithHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/WithHeader";
  }

  static const char* value(const ::test_roscpp::WithHeader_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::WithHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"uint32 a\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::test_roscpp::WithHeader_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::WithHeader_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.a);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WithHeader_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::WithHeader_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::WithHeader_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "a: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.a);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_WITHHEADER_H
