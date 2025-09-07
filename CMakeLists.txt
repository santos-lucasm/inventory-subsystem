cmake_minimum_required(VERSION 3.16)

project(inventory-subsystem)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb -pthread -lm")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall -pthread -lm")
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  add_compile_definitions(DEBUG)
endif()

find_package(raylib 3.0 REQUIRED)

add_subdirectory(src)
add_executable(${PROJECT_NAME} main.cpp)

include_directories(${PROJECT_NAME} PUBLIC include)
target_link_directories(${PROJECT_NAME} PRIVATE src)


target_link_libraries(${PROJECT_NAME} PUBLIC slot_lib general_lib raylib)

