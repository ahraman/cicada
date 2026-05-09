cmake_minimum_required(VERSION 4.1)

# CMP0141: use dedicated property fields for MSVC ABI
if(POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)

  # Enable Hot Reload for MSVC compilers
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project("cicada")

add_executable(CicadaEngine)
target_include_directories(CicadaEngine PUBLIC "${CMAKE_SOURCE_DIR}/include" PRIVATE "${CMAKE_SOURCE_DIR}/src")

add_subdirectory(src)
