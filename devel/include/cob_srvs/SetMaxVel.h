// Generated by gencpp from file cob_srvs/SetMaxVel.msg
// DO NOT EDIT!


#ifndef COB_SRVS_MESSAGE_SETMAXVEL_H
#define COB_SRVS_MESSAGE_SETMAXVEL_H

#include <ros/service_traits.h>


#include <cob_srvs/SetMaxVelRequest.h>
#include <cob_srvs/SetMaxVelResponse.h>


namespace cob_srvs
{

struct SetMaxVel
{

typedef SetMaxVelRequest Request;
typedef SetMaxVelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetMaxVel
} // namespace cob_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_srvs::SetMaxVel > {
  static const char* value()
  {
    return "5212ea5f4e683819f4e395ad0eb8ae8c";
  }

  static const char* value(const ::cob_srvs::SetMaxVel&) { return value(); }
};

template<>
struct DataType< ::cob_srvs::SetMaxVel > {
  static const char* value()
  {
    return "cob_srvs/SetMaxVel";
  }

  static const char* value(const ::cob_srvs::SetMaxVel&) { return value(); }
};


// service_traits::MD5Sum< ::cob_srvs::SetMaxVelRequest> should match 
// service_traits::MD5Sum< ::cob_srvs::SetMaxVel > 
template<>
struct MD5Sum< ::cob_srvs::SetMaxVelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_srvs::SetMaxVel >::value();
  }
  static const char* value(const ::cob_srvs::SetMaxVelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_srvs::SetMaxVelRequest> should match 
// service_traits::DataType< ::cob_srvs::SetMaxVel > 
template<>
struct DataType< ::cob_srvs::SetMaxVelRequest>
{
  static const char* value()
  {
    return DataType< ::cob_srvs::SetMaxVel >::value();
  }
  static const char* value(const ::cob_srvs::SetMaxVelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_srvs::SetMaxVelResponse> should match 
// service_traits::MD5Sum< ::cob_srvs::SetMaxVel > 
template<>
struct MD5Sum< ::cob_srvs::SetMaxVelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_srvs::SetMaxVel >::value();
  }
  static const char* value(const ::cob_srvs::SetMaxVelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_srvs::SetMaxVelResponse> should match 
// service_traits::DataType< ::cob_srvs::SetMaxVel > 
template<>
struct DataType< ::cob_srvs::SetMaxVelResponse>
{
  static const char* value()
  {
    return DataType< ::cob_srvs::SetMaxVel >::value();
  }
  static const char* value(const ::cob_srvs::SetMaxVelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_SRVS_MESSAGE_SETMAXVEL_H