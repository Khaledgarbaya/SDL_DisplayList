cmake_minimum_required(VERSION 2.8.4)
project(SDL_Display)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp display/DisplayObject.h display/DisplayObject.cpp
                geom/Rectangle.h geom/Rectangle.cpp
                geom/Point.h geom/Point.cpp)
add_executable(SDL_Display ${SOURCE_FILES})