cmake_minimum_required(VERSION 3.18)

project(LearnCpp)

include(cmake/helper.cmake)

# default c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(
    -Wall
    -Wextra
)


add_subdirectory(cpp11)
add_subdirectory(cpp17)
add_subdirectory(cpp20)
