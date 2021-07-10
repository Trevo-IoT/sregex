cmake_minimum_required(VERSION 3.10)
project(sRegex)

include_directories(include)

file(GLOB SOURCES "src/*.c")
add_executable(sRegex ${SOURCES})
