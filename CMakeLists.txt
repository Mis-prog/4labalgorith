cmake_minimum_required(VERSION 3.25)
project(4labnew)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(lib/googletest-main)
include_directories(lib/googletest-main/googletest/include)

add_executable(4labnew main.cpp graph.cpp graph.h test.cpp)
target_link_libraries(4labnew gtest gtest_main)