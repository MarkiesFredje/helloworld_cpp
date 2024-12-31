cmake_minimum_required(VERSION 3.5.0)
project(helloworld VERSION 0.1.0 LANGUAGES C CXX)

add_executable(helloworld helloworld.cpp)

include(CTest)
enable_testing()

set_property(TARGET helloworld PROPERTY CXX_STANDARD 17)