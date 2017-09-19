cmake_minimum_required(VERSION 3.8)
project(Lec6_1)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES functions.cpp)
#set(SOURCE_FILES functionsReturn.cpp)
#set(SOURCE_FILES functionsStruct.cpp)
set(SOURCE_FILES Point.cpp)

add_executable(Lec6_1 ${SOURCE_FILES})