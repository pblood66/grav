cmake_minimum_required(VERSION 3.10.0)

project(grav VERSION 0.1.0 LANGUAGES CXX)

add_executable(grav
    src/main.cpp
    src/engine/core.cpp
)

target_include_directories(grav PRIVATE include)