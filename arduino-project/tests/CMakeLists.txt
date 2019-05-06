cmake_minimum_required(VERSION 2.6)
SET(MY_PROJECT_NAME "Arduino & GTest")

project(${MY_PROJECT_NAME})

message("CMAKE_PROJECT_NAME: " ${CMAKE_PROJECT_NAME}) 
message("PROJECT_NAME: " ${PROJECT_NAME})  
message("CMAKE_CURRENT_SOURCE_DIR: " ${CMAKE_CURRENT_SOURCE_DIR}) 
message("PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR}) 

message("# Locate GTest")
find_package(GTest REQUIRED)
message("GTEST_INCLUDE_DIRS: " ${GTEST_INCLUDE_DIRS}) 
message("GTEST_LIBRARIES: " ${GTEST_LIBRARIES}) 
include_directories(${GTEST_INCLUDE_DIRS})

message("# Link runTests with what we want to test and the GTest and pthread library")
add_executable(runTests tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
