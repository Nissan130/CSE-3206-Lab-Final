cmake_minimum_required(VERSION 3.10)
project(FactoryMethodExample)

set(CMAKE_CXX_STANDARD 17)

# GoogleTest (download via FetchContent)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Create a library from our source headers (header-only approach)
add_library(factory_lib INTERFACE)
target_include_directories(factory_lib INTERFACE src)

# Define the test executable
add_executable(runTests tests/ShapeFactoryTest.cpp)
target_link_libraries(runTests factory_lib gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
