cmake_minimum_required(VERSION 4.1)

project("cicada")

add_executable(CicadaEngine)
target_include_directories(CicadaEngine PUBLIC "${CMAKE_SOURCE_DIR}/include" PRIVATE "${CMAKE_SOURCE_DIR}/src")

add_subdirectory(src)
