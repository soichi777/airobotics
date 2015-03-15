/**
 * 
 */
#include "CppUTest/TestHarness.h"
#include "XBeeAPIFrameBuilder.h"

TEST_GROUP(WirelessCommunication)
{
  XBeeAPIFrameBuilder* builder;

  void setup()
  {
    builder = new XBeeAPIFrameBuilder();
  }

  void teardown()
  {
    delete builder;
  }
};

TEST(WirelessCommunication, buildSuccess)
{
  CHECK_EQUAL("run", builder->build('run')->GetFrameData());
}

TEST(WirelessCommunication, HelloWorld)
{
  STRCMP_EQUAL("hello", "world");
}
