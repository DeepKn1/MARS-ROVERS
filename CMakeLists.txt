cmake_minimum_required(VERSION 3.5.1)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link Test_Rover with what we want to test and the GTest and pthread library
add_executable(Test_Rover UNITTEST.cpp)
target_link_libraries(Test_Rover ${GTEST_LIBRARIES} pthread)
