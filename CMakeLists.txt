cmake_minimum_required(VERSION 3.20)
project(mini_exchange LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(mx_warnings INTERFACE)
target_compile_options(mx_warnings INTERFACE -Wall -Wextra -Wpedantic -Wconversion -Wshadow)

add_executable(mx_layout src/main.cpp)
target_link_libraries(mx_layout PRIVATE mx_warnings)
