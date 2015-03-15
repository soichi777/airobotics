/**
 * 
 */
#include "CppUTest/TestHarness.h"
#include "XBeeAPIFrameBuilder.h"

TEST_GROUP(WirelessCommunication)
{
  XBeeAPIFrameBuilder* API;

  void setup()
  {
    API = new XBeeAPIFrameBuilder();
  }

  void teardown()
  {
    delete API;
  }
};

TEST(WirelessCommunication, EchoTestSuccess)
{
  STRCMP_EQUAL("xbee API frame built", API->echo().c_str());
}

TEST(WirelessCommunication, EchoTestFail)
{
  STRCMP_EQUAL("xbee API frame not built", API->echo().c_str());
}

TEST(WirelessCommunication, HelloWorld)
{
  STRCMP_EQUAL("hello", "world");
}
