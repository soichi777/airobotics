project(AIRobotics)

include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/WirelessCommunication/)

add_executable(Main
  main.cpp
  WirelessCommunication/XBeeDataFrameBuilder.cpp
)
