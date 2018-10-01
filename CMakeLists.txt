cmake_minimum_required(VERSION 3.12)
project(PersonRoles)

set(CMAKE_CXX_STANDARD 14)

add_executable(PersonRoles main.cpp PersonRole.cpp PersonRole.h Person.cpp Person.h)