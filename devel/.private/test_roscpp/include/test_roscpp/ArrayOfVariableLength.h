// Generated by gencpp from file test_roscpp/ArrayOfVariableLength.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_ARRAYOFVARIABLELENGTH_H
#define TEST_ROSCPP_MESSAGE_ARRAYOFVARIABLELENGTH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_roscpp/VariableLength.h>

namespace test_roscpp
{
template <class ContainerAllocator>
struct ArrayOfVariableLength_
{
  typedef ArrayOfVariableLength_<ContainerAllocator> Type;

  ArrayOfVariableLength_()
    : a()  {
    }
  ArrayOfVariableLength_(const ContainerAllocator& _alloc)
    : a()  {
  (void)_alloc;
      a.assign( ::test_roscpp::VariableLength_<ContainerAllocator> (_alloc));
  }



   typedef boost::array< ::test_roscpp::VariableLength_<ContainerAllocator> , 4>  _a_type;
  _a_type a;





  typedef boost::shared_ptr< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> const> ConstPtr;

}; // struct ArrayOfVariableLength_

typedef ::test_roscpp::ArrayOfVariableLength_<std::allocator<void> > ArrayOfVariableLength;

typedef boost::shared_ptr< ::test_roscpp::ArrayOfVariableLength > ArrayOfVariableLengthPtr;
typedef boost::shared_ptr< ::test_roscpp::ArrayOfVariableLength const> ArrayOfVariableLengthConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7404d454a50b82c426a3a2c76fbcefd";
  }

  static const char* value(const ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7404d454a50b82cULL;
  static const uint64_t static_value2 = 0x426a3a2c76fbcefdULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/ArrayOfVariableLength";
  }

  static const char* value(const ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> >
{
  static const char* value()
  {
    return "VariableLength[4] a\n"
"================================================================================\n"
"MSG: test_roscpp/VariableLength\n"
"uint32[] a\n"
;
  }

  static const char* value(const ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArrayOfVariableLength_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::ArrayOfVariableLength_<ContainerAllocator>& v)
  {
    s << indent << "a[]" << std::endl;
    for (size_t i = 0; i < v.a.size(); ++i)
    {
      s << indent << "  a[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::test_roscpp::VariableLength_<ContainerAllocator> >::stream(s, indent + "    ", v.a[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_ARRAYOFVARIABLELENGTH_H
