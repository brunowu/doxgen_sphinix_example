cmake_minimum_required(VERSION 3.18)

project(doxygen-sphinx-example VERSION 0.1)

add_executable( "car.exe" car.cpp )
add_subdirectory(docs)
