cmake_minimum_required(VERSION 3.15)
project(cpp_patterns)

set(CMAKE_CXX_STANDARD 17)

set(Boost_INCLUDE_DIR "g:/app/boost_1_69/include/boost-1_69")
set(Boost_LIBRARY_DIR g:/app/boost_1_69/lib)
#find_package(Boost COMPONENTS thread REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

add_executable(cpp_patterns  main.cpp strategy/Duck.h
        observer/WeatherApp.h strategy/FlyBehavior.h
        strategy/QuackBehavior.h strategy/MallardDuck.cpp
        strategy/MallardDuck.h strategy/Duck.cpp
        strategy/FlyByWings.cpp strategy/FlyByWings.h
        strategy/FlyByRocket.cpp strategy/FlyByRocket.h

        observer/WeatherAppMoscow.cpp
        observer/WeatherAppMoscow.h
        observer/Observer.h
        observer/DisplayElement.h
        observer/StatisticDisplay.cpp
        observer/StatisticDisplay.h)


# compile and link second app
#add_executable(prg2 ${CommonSources} ${Prg2SpecificSources})
#target_link_libraries(prg2 lib1 lib2 lib3)
##set target-specific options
#set_target_properties(prg1 PROPERTIES COMPILE_DEFINITIONS "FOO=BAR2")
#If you want to override linking flags, you may use set_target_properties with LINK_FLAGS