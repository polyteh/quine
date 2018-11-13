cmake_minimum_required(VERSION 3.1)
# This is a comment !

set(CMAKE_CXX_STANDARD 14)
project(quine)
add_executable(quine quine.cpp ${SRCS})
