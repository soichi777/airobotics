/**
 * 
 */
#include "APIFrame.h"
 
APIFrame::APIFrame() {}
APIFrame::~APIFrame() {}
 
APIFrame::APIFrame(uint8_t *dataString, int &Length)
{
  frameData.assign(dataString, dataString + Length);
}
 
uint8_t APIFrame::getFrameDataLength() const
{
  return frameDataLength;
}
 
const uint8_t* APIFrame::getFrameData() const
{
  return &frameData[0];
}
