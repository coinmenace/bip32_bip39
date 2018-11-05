cmake_minimum_required(VERSION 3.6)
project(bip39_bip32)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(bip39_bip32 ${SOURCE_FILES})