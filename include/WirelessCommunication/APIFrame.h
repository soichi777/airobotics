#ifndef APIFrame_h
#define APIFrame_h

#include <vector>
#include "stdint.h"

/**
 * @file APIFrame.h
 * @brief API frame value object, which is designed to be immutable
 * @author Soichi
 * @date 2015-03-15 08:55:24 Sunday
 * reference: https://developer.mbed.org/users/yangcq88517/code/SmartLabXBeeAPI/file/e863071f1c9e/Type/APIFrame.h
 */
class APIFrame
{
 private: //originally it was 'protected'
  int frameDataLength;
 
  std::vector<uint8_t> frameData;
 
 public:
  APIFrame();
  APIFrame(uint8_t *dataString, int &Length);
  
  ~APIFrame();
  APIFrame(const APIFrame& other);
  
  uint8_t getFrameDataLength() const;
  const uint8_t* getFrameData() const;
  
  bool operator==(const APIFrame& other) const;
  bool operator!=(const APIFrame& other) const;
};

#endif
