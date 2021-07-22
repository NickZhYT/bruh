cmake_minimum_required(VERSION 3.1)

project(cpp_prj)
include_directories(D:/cpp_prj/SFML-2.5.1)
set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(cpp_prj hello.cpp)
target_link_libraries(cpp_prj sfml-graphics sfml-audio sfml-window sfml-system)