cmake_minimum_required(VERSION 3.17)
project(param)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)

file(GLOB SOURCES "src/*.cpp")
add_library(${PROJECT_NAME} "${SOURCES}")
target_include_directories(${PROJECT_NAME} PUBLIC include)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.10.0
)

FetchContent_MakeAvailable(googletest )
file(GLOB TEST_SOURCES "test/*.cpp")
add_executable(${PROJECT_NAME}_test ${TEST_SOURCES})
#add_test(NAME ${PROJECT_NAME}_test COMMAND ${P)
target_link_libraries(${PROJECT_NAME}_test  gtest gtest_main stdc++ ${PROJECT_NAME})
