#include "APIFrame.h"
 
APIFrame::APIFrame() {}
 
APIFrame::APIFrame(uint8_t *frameData, int &Length)
{
  FrameData.assign(frameData, frameData + Length);
}
 
uint8_t APIFrame::GetFrameDataLength() const
{
  return FrameDataLength;
}
 
const uint8_t* APIFrame::GetFrameData() const
{
  return &FrameData[0];
}
