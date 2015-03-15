#include <vector>
#include "stdint.h"

/**
 * @file APIFrame.h
 * @brief API frame value object, which is design to be immutable
 * @author Soichi
 * @date 2015-03-15 08:55:24 Sunday
 * reference: https://developer.mbed.org/users/yangcq88517/code/SmartLabXBeeAPI/file/e863071f1c9e/Type/APIFrame.h
 */
class APIFrame
{
 protected:
  int FrameDataLength;
 
  std::vector<uint8_t> FrameData;
 
 public:
  APIFrame();
 
  APIFrame(uint8_t *frameData, int &Length);
 
  uint8_t GetFrameDataLength() const;
 
  const uint8_t* GetFrameData() const;
};
