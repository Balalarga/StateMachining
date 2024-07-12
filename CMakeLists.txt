cmake_minimum_required(VERSION 3.28)
project(StateMachining)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(ENABLE_TESTS "Enable tests build" ON)

find_package(spdlog CONFIG REQUIRED)

add_subdirectory(Source)

if (${ENABLE_TESTS})
    add_subdirectory(Tests)
endif ()
