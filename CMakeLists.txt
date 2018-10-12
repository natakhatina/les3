cmake_minimum_required(VERSION 3.12)
set(name les3)

project(${name})

set(CMAKE_CXX_STANDARD 14)

file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.h)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(les3 main.cpp ${sources} ${headers})