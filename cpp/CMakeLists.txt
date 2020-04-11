cmake_minimum_required(VERSION 3.15)
project(cpp_patterns)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /utf-8 ")
if(WIN32)
   # add_definitions(-DUNICODE=1)

    if (MSVC)
        # warning level 4 and all warnings as errors
        #add_compile_options(/W4 /WX)
        add_compile_options(/W4)
        add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
        add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
        #add_compile_options(/source-charset:utf-8)
    endif()


endif()
set(Boost_INCLUDE_DIR "g:/app/boost_1_69/include/boost-1_69")
set(Boost_LIBRARY_DIR g:/app/boost_1_69/lib)
#find_package(Boost COMPONENTS thread REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

add_executable(cpp_patterns_observer  main.cpp
        strategy/Duck.h
        observer/WeatherApp.h
        observer/WeatherAppMoscow.cpp
        observer/WeatherAppMoscow.h
        observer/Observer.h
        observer/DisplayElement.h
        observer/StatisticDisplay.cpp
        observer/StatisticDisplay.h observer/ForecastDisplay.cpp observer/ForecastDisplay.h)

add_executable(cpp_patterns_strategy main.cpp strategy/Duck.h
        strategy/FlyBehavior.h
        strategy/QuackBehavior.h strategy/MallardDuck.cpp
        strategy/MallardDuck.h strategy/Duck.cpp
        strategy/FlyByWings.cpp strategy/FlyByWings.h
        strategy/FlyByRocket.cpp strategy/FlyByRocket.h)

add_executable(cpp_patterns_decorator main_decorator.cpp decorator/DbConnection.h decorator/PgSQLConnection.cpp decorator/PgSQLConnection.h decorator/DbConnectionOverSSH.cpp decorator/DbConnectionOverSSH.h)
add_executable(cpp_interface InterfaceVsAbstractCpp/main_interface.cpp)
add_executable(cpp_patterns_fabrica fabrica/main_fabrica.cpp fabrica/CheesePizza.cpp fabrica/SimplePizzaFactory.cpp fabrica/SimplePizzaFactory.h fabrica/PizzaStore.cpp fabrica/PizzaStore.h fabrica/PepperoniPizza.cpp fabrica/PepperoniPizza.h)
# compile and link second app
#add_executable(prg2 ${CommonSources} ${Prg2SpecificSources})
#target_link_libraries(prg2 lib1 lib2 lib3)
##set target-specific options
#set_target_properties(prg1 PROPERTIES COMPILE_DEFINITIONS "FOO=BAR2")
#If you want to override linking flags, you may use set_target_properties with LINK_FLAGS