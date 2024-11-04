cmake_minimum_required(VERSION 3.29)
project(lab1 CXX)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab1 main.cpp)

find_package(OpenMP)
if(OpenMP_CXX_FOUND)
    target_link_libraries(lab1 PRIVATE OpenMP::OpenMP_CXX)
endif()