/**
 * 
 */
#include "APIFrame.h"
 
APIFrame::APIFrame() {}
APIFrame::~APIFrame() {}
 
APIFrame::APIFrame(uint8_t *dataString, int &length)
{
  frameData.assign(dataString, dataString + length);
}
 
uint8_t APIFrame::getFrameDataLength() const
{
  return frameDataLength;
}
 
const uint8_t* APIFrame::getFrameData() const
{
  return &frameData[0];
}
