#include "XBeeAPIFrameBuilder.h"

//TODO change input to Command object
XBeeAPIFrameBuilder::XBeeAPIFrameBuilder()
{
}

XBeeAPIFrameBuilder::~XBeeAPIFrameBuilder() {}

APIFrame XBeeAPIFrameBuilder::build(char *command)
{
  uint8_t *frameData;
  int length;
  return new APIFrame(frameData, length);
}
