#规定CMake版本
cmake_minimum_required(VERSION 3.10)

project(MeanLengthProject)

#选择C++语言
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#头文件路径
include_directories(include)

#将src编译成静态库
add_library(mean_lib src/mean_length.cpp)

#将main.cpp编译为可执行程序并命名
add_executable(test_program main.cpp)

#链接test_program与mean_lib库
target_link_libraries(test_program mean_lib)