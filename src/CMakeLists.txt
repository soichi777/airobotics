project(AIRobotics)

include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/WirelessCommunication/)

add_executable(Main
  main.cpp
  WirelessCommunication/XBeeAPIFrameBuilder.cpp
  WirelessCommunication/ConnectionInitializer.cpp
)
add_library(XBeeAPIFrameBuilder ./WirelessCommunication/XBeeAPIFrameBuilder.cpp)
add_library(ConnectionInitializer ./WirelessCommunication/ConnectionInitializer.cpp)
