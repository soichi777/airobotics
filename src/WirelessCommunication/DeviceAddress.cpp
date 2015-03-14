#include "DeviceAddress.h"
 
DeviceAddress::DeviceAddress()
{ }
 
DeviceAddress::DeviceAddress(const uint8_t* msb_lsb, const uint8_t* net)
{
  value.assign(msb_lsb,msb_lsb+8);
  if (net != NULL) {
    value.push_back(net[0]);
    value.push_back(net[1]);
  } else {
    value.push_back(0xFF);
    value.push_back(0xFF);
  }
}
 
DeviceAddress::DeviceAddress(uint32_t msb,uint32_t lsb, uint16_t net)
{
  uint8_t _value[] = {msb >> 24,msb >> 16,msb >> 8,msb,lsb >> 24,lsb >> 16,lsb >> 8,lsb,net >> 8,net};
  value.assign(_value,_value+10);
}
 
DeviceAddress::DeviceAddress(const uint8_t* msb_lsb_net)
{
  value.assign(msb_lsb_net,msb_lsb_net+10);
}
 
uint32_t DeviceAddress::GetMSB() const
{
  return value[0]<<24 | value[1]<<16 | value[2]<<8 | value[3];
}
 
uint32_t DeviceAddress::GetLSB() const
{
  return value[4]<<24 | value[5]<<16 | value[6]<<8 | value[7];
}
 
uint16_t DeviceAddress::GetNET() const
{
  return value[8]<<8 | value[9];
}
 
const uint8_t* DeviceAddress::GetValue() const
{
  return &value[0];
}
 
// DeviceAddress DeviceAddress::Parse(const CommandResponseBase *response)
// {
//   return DeviceAddress(&response->GetParameter()[2],&response->GetParameter()[0]);
// }
 
bool operator ==(const DeviceAddress &a,const DeviceAddress &b)
{
  for (uint8_t i = 0; i < 8; i++)
    if (a.value[i] != b.value[i])
      return false;
  return true;
}
 
bool operator !=(const DeviceAddress &a,const DeviceAddress &b)
{
  return !(a==b);
}
