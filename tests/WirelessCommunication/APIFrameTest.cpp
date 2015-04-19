/**
 * 
 */
#include "CppUTest/TestHarness.h"
#include "APIFrame.h"

TEST_GROUP(WirelessCommunication)
{
  APIFrame *frame1;
  APIFrame *frame2;
  uint8_t tmp = 5;
  int length = 1;

  void setup()
  {
    frame1 = new APIFrame(&tmp, length);
    frame2 = new APIFrame(&tmp, length);
  }

  void teardown()
  {
    delete frame1;
    delete frame2;
  }
};

//TODO use operator '==' instead
TEST(WirelessCommunication, buildSuccess)
{
  CHECK_EQUAL(frame1->getFrameData(), frame2->getFrameData());
}

