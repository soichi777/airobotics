#include <string>

/**
 * @file XBeeAPIFrameBuilder.h
 * @brief  build XBee API frame
 * @author Soichi
 * @date 2015-03-15 08:28:35 Sunday
 */
class XBeeAPIFrameBuilder {
 public:
  XBeeAPIFrameBuilder(uint8_t FrameID, const );
  ~XBeeAPIFrameBuilder();

  /**
   * 
   */
  APIFrame XBeeAPIFrameBuilder::build();
};
