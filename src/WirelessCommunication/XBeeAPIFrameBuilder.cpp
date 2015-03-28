#include "XBeeAPIFrameBuilder.h"

//TODO change input to Command object
XBeeAPIFrameBuilder::XBeeAPIFrameBuilder()
{
}

XBeeAPIFrameBuilder::~XBeeAPIFrameBuilder() {}

uint8_t XBeeAPIFrameBuilder::build(uint8_t *command)
{
  uint8_t *frameData;
  *frameData = 'run';
  int length = 2;
  return new APIFrame(frameData, length);
}
