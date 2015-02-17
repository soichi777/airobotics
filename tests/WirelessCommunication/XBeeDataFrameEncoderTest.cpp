/**
 * 
 */
#include "CppUTest/TestHarness.h"
//#include "CppUTest/TestOutput.h"

TEST_GROUP(WirelessCommunication)
{
};

TEST(WirelessCommunication, FirstTest)
{
  FAIL("fail here");
}

TEST(WirelessCommunication, HelloWorld)
{
  STRCMP_EQUAL("hello", "world");
}
