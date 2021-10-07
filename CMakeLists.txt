cmake_minimum_required(VERSION 3.15)

project(doxygen-sphinx-example VERSION 0.1)


file(GLOB_RECURSE headers CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/include/*/*.hpp")
file(GLOB_RECURSE sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*/*.cpp")
#Add depedencies 


# ---- Create library ----

include_directories(SYSTEM "${CMAKE_CURRENT_SOURCE_DIR}/include")
# Note: for header-only libraries change all PUBLIC flags to INTERFACE and create an interface
# target: add_library(Greeter INTERFACE) 
#set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
#----------------------------------------------------------------

add_executable( "car.exe" ${headers} ${sources} )
add_subdirectory(docs)
