cmake_minimum_required(VERSION 3.5.0)
project(helloworld VERSION 0.1.0 LANGUAGES C CXX)

# Add the src directory to the list of source directories
add_subdirectory(src)

set_property(TARGET helloworld PROPERTY CXX_STANDARD 17)