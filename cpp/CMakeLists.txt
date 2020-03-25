cmake_minimum_required(VERSION 3.15)
project(cpp_patterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_patterns  main.cpp strategy/Duck.h observer/WeatherApp.h strategy/FlyBehavior.h)