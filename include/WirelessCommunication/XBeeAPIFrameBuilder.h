#include <string>
#include "APIFrame.h"

/**
 * @file XBeeAPIFrameBuilder.h
 * @brief  build XBee API frame
 * @author Soichi
 * @date 2015-03-15 08:28:35 Sunday
 */
class XBeeAPIFrameBuilder {
 public:
  XBeeAPIFrameBuilder();
  ~XBeeAPIFrameBuilder();

  /**
   * 
   */
  uint8_t build(uint8_t *command);
};
