cmake_minimum_required(VERSION 3.27)
project(RIMAEngine)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(RIMAEngine main.cpp)

target_link_libraries(RIMAEngine sfml-graphics sfml-audio)