cmake_minimum_required(VERSION 3.10)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(tests)

add_executable(${PROJECT_NAME}
		src/Math.h
		src/main.cpp)