cmake_minimum_required(VERSION 3.16)
project(hello-world VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(hello-world main.cpp)

option(CMAKE_EXPORT_COMPILE_COMMANDS ON)

target_precompile_headers(hello-world PRIVATE precompiled/hello.hpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
