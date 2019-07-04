// Generated by gencpp from file cob_srvs/SetJointTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef COB_SRVS_MESSAGE_SETJOINTTRAJECTORYREQUEST_H
#define COB_SRVS_MESSAGE_SETJOINTTRAJECTORYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <trajectory_msgs/JointTrajectory.h>

namespace cob_srvs
{
template <class ContainerAllocator>
struct SetJointTrajectoryRequest_
{
  typedef SetJointTrajectoryRequest_<ContainerAllocator> Type;

  SetJointTrajectoryRequest_()
    : trajectory()  {
    }
  SetJointTrajectoryRequest_(const ContainerAllocator& _alloc)
    : trajectory(_alloc)  {
  (void)_alloc;
    }



   typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _trajectory_type;
  _trajectory_type trajectory;





  typedef boost::shared_ptr< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetJointTrajectoryRequest_

typedef ::cob_srvs::SetJointTrajectoryRequest_<std::allocator<void> > SetJointTrajectoryRequest;

typedef boost::shared_ptr< ::cob_srvs::SetJointTrajectoryRequest > SetJointTrajectoryRequestPtr;
typedef boost::shared_ptr< ::cob_srvs::SetJointTrajectoryRequest const> SetJointTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_srvs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2a0eff76c870e8595636c2a562ca298e";
  }

  static const char* value(const ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2a0eff76c870e859ULL;
  static const uint64_t static_value2 = 0x5636c2a562ca298eULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_srvs/SetJointTrajectoryRequest";
  }

  static const char* value(const ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "trajectory_msgs/JointTrajectory trajectory\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectory\n"
"Header header\n"
"string[] joint_names\n"
"JointTrajectoryPoint[] points\n"
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
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectoryPoint\n"
"# Each trajectory point specifies either positions[, velocities[, accelerations]]\n"
"# or positions[, effort] for the trajectory to be executed.\n"
"# All specified values are in the same order as the joint names in JointTrajectory.msg\n"
"\n"
"float64[] positions\n"
"float64[] velocities\n"
"float64[] accelerations\n"
"float64[] effort\n"
"duration time_from_start\n"
;
  }

  static const char* value(const ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trajectory);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetJointTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_srvs::SetJointTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "trajectory: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.trajectory);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_SRVS_MESSAGE_SETJOINTTRAJECTORYREQUEST_H