/**
 * 
 */
#include "CppUTest/TestHarness.h"
#include "APIFrame.h"

TEST_GROUP(WirelessCommunication)
{
  APIFrame* frame1;
  APIFrame* frame2;

  void setup()
  {
    frame1 = new APIFrame('x', 1);
    frame2 = new APIFrame('x', 1);
  }

  void teardown()
  {
    delete frame1;
    delete frame2;
  }
};

TEST(WirelessCommunication, buildSuccess)
{
  CHECK_EQUAL(frame1->getFrameData(), frame2->getFrameData());
}

