cmake_minimum_required(VERSION 3.2)
project(Z80Emulator)

set(SOURCE_FILES main.cpp RegisterSet.cpp RegisterSet.h BaseTypes.h)

add_executable(Z80Emulator ${SOURCE_FILES})