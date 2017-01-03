cmake_minimum_required(VERSION 3.6)
project(hrlib)

set(CMAKE_CXX_STANDARD 11)

add_definitions(-DFILE_INPUT)

set(SOURCE_FILES
        hr.hpp
        main.cpp)

add_executable(hrlib ${SOURCE_FILES})
