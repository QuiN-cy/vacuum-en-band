// Generated by gencpp from file test_roscpp/BadTestStringStringRequest.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_BADTESTSTRINGSTRINGREQUEST_H
#define TEST_ROSCPP_MESSAGE_BADTESTSTRINGSTRINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_roscpp
{
template <class ContainerAllocator>
struct BadTestStringStringRequest_
{
  typedef BadTestStringStringRequest_<ContainerAllocator> Type;

  BadTestStringStringRequest_()
    : strbad()  {
    }
  BadTestStringStringRequest_(const ContainerAllocator& _alloc)
    : strbad(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _strbad_type;
  _strbad_type strbad;





  typedef boost::shared_ptr< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BadTestStringStringRequest_

typedef ::test_roscpp::BadTestStringStringRequest_<std::allocator<void> > BadTestStringStringRequest;

typedef boost::shared_ptr< ::test_roscpp::BadTestStringStringRequest > BadTestStringStringRequestPtr;
typedef boost::shared_ptr< ::test_roscpp::BadTestStringStringRequest const> BadTestStringStringRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/melodic/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/test/msg', '/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/test_serialization/msg', '/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/perf/msg', '/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/home/student/rosws/src/std_msgs-kinetic-devel/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0eb2dbe383c40e9fd573702d3024aa21";
  }

  static const char* value(const ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0eb2dbe383c40e9fULL;
  static const uint64_t static_value2 = 0xd573702d3024aa21ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/BadTestStringStringRequest";
  }

  static const char* value(const ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string strbad\n"
;
  }

  static const char* value(const ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.strbad);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BadTestStringStringRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::BadTestStringStringRequest_<ContainerAllocator>& v)
  {
    s << indent << "strbad: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.strbad);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_BADTESTSTRINGSTRINGREQUEST_H
