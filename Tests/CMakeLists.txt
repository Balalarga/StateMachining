cmake_minimum_required(VERSION 3.28)
project(StateMachiningTests)

set(CMAKE_CXX_STANDARD 20)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

find_package(GTest REQUIRED)
enable_testing()

file(GLOB_RECURSE SOURCE_FILES
        ${CMAKE_CURRENT_LIST_DIR}/*.cpp
        ${CMAKE_CURRENT_LIST_DIR}/*.h
)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE 
        GTest::gtest
        GTest::gtest_main
        GTest::gmock
        GTest::gmock_main
        StateMachining
)

include(GoogleTest)
#gtest_discover_tests(${PROJECT_NAME})
add_test(AllTestsInMain ${PROJECT_NAME})
