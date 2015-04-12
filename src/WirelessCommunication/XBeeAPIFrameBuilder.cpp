/**
 * 
 */
#include "XBeeAPIFrameBuilder.h"

//TODO change input to Command object
XBeeAPIFrameBuilder::XBeeAPIFrameBuilder()
{
}

XBeeAPIFrameBuilder::~XBeeAPIFrameBuilder() {}

int XBeeAPIFrameBuilder::build(int command)
{
  // uint8_t *frameData;
  // *frameData = 'run';
  // int length = 2;
  //return new APIFrame(frameData, length);
  return command;
}
