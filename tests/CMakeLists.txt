project(AIRobotics)

include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/WirelessCommunication)

include_directories($ENV{CPPUTEST_HOME}/include)

# add CppUTest library
add_library(imp_cpputest STATIC IMPORTED)
set_property(TARGET imp_cpputest PROPERTY
  IMPORTED_LOCATION $ENV{CPPUTEST_HOME}/lib/libCppUTest.a)

# add_library(XBeeAPIFrameBuilderTest ./WirelessCommunication/XBeeAPIFrameBuilderTest.cpp)
add_library(APIFrame ../src/WirelessCommunication/APIFrame.cpp)
add_library(XBeeAPIFrameBuilderTest ./WirelessCommunication/XBeeAPIFrameBuilderTest.cpp)
add_library(APIFrameTest ./WirelessCommunication/APIFrameTest.cpp)

add_executable(RunAllTests RunAllTests.cpp)

target_link_libraries(RunAllTests
  imp_cpputest
  APIFrame
  APIFrameTest

  XBeeAPIFrameBuilderTest
  XBeeAPIFrameBuilder)
