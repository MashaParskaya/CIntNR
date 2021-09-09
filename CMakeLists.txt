cmake_minimum_required(VERSION 2.8)

project(CIntNR)

set(CIntNR_src main.cpp CIntNR.cpp)
set(CIntNR_hdr head.hpp CIntNR.hpp)

add_executable(${PROJECT_NAME} ${CIntNR_src} ${CIntNR_hdr})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 /std:c++14")