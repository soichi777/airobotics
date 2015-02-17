cmake_minimum_required(VERSION 2.8)

project(AIRobotics)

if (DEFINED ENV{CPPUTEST_HOME})
  message("Using CppUTest found in $ENV{CPPUTEST_HOME}")
else ()
  message("CPPUTEST_HOME is not set; You must tell CMake where to find CppUTest")
  return()
endif()

enable_language(CXX)

add_definitions("-Wall -std=c++11")

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(src)
add_subdirectory(tests)
