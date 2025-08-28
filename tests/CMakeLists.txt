cmake_minimum_required(VERSION 3.10)
project(MyTests)

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/refs/heads/main.zip
	DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME} my_tests.cpp)

target_link_libraries(${PROJECT_NAME} GTest::gtest_main)