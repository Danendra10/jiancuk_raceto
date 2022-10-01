cmake_minimum_required(VERSION 3.0.2)
project(defender)

catkin_package(
 INCLUDE_DIRS include
)

include_directories(
include
  ${catkin_INCLUDE_DIRS}
)

## Declare a C++ library
add_library(${PROJECT_NAME}_lib src/${PROJECT_NAME}.c)
target_link_libraries(${PROJECT_NAME}_lib ${catkin_LIBRARIES})
