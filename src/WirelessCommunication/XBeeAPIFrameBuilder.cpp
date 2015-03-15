#include "XBeeAPIFrameBuilder.h"
#include "APIFrame.h"

XBeeAPIFrameBuilder::XBeeAPIFrameBuilder() {}

XBeeAPIFrameBuilder::~XBeeAPIFrameBuilder() {}

XBeeAPIFrameBuilder::build()
{
  return new APIFrame(uint8_t *frameData, int &Length);
}
