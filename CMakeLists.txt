cmake_minimum_required(VERSION 3.8)
project(xlib)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES xlib.cpp xlib.h)

add_library(xlib STATIC ${SOURCE_FILES})
