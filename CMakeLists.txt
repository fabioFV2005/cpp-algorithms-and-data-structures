cmake_minimum_required(VERSION 4.3)
project(cpp_algorithms_and_data_structures)

set(CMAKE_CXX_STANDARD 14)

include_directories(linkedList)
include_directories(strings)

add_executable(cpp_algorithms_and_data_structures
        main.cpp
        math/tram.cpp
)
