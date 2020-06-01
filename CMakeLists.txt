cmake_minimum_required(VERSION 3.2)

project(Z80Emulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(Z80EMULATOR ${PROJECT_SOURCE_DIR}/include)
set(Z80EMULATOR_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(Z80EMULATOR_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

#set(DIVISION_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/division)

include_directories(${Z80EMULATOR_INSTALL_INCLUDE_DIR})
#include_directories(${DIVISION_HEADERS_DIR})

add_subdirectory(src)
#add_subdirectory(test)