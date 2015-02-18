/**
 * 
 */
#include "CppUTest/TestHarness.h"
#include "XBeeDataFrameBuilder.h"

TEST_GROUP(WirelessCommunication)
{
  XBeeDataFrameBuilder* data;

  TEST_SETUP() {
    data = new XBeeDataFrameBuilder();
  }
};

TEST(WirelessCommunication, EchoTestSuccess)
{
  STRCMP_EQUAL("xbee data frame built", data->echo().c_str());
}

TEST(WirelessCommunication, EchoTestFail)
{
  STRCMP_EQUAL("xbee data frame not built", data->echo().c_str());
}

TEST(WirelessCommunication, HelloWorld)
{
  STRCMP_EQUAL("hello", "world");
}
