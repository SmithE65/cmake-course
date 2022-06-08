cmake_minimum_required(VERSION 3.16)

project(cpp-project-template VERSION 1.0.0 LANGUAGES C CXX)

add_library(Library STATIC my_lib.cc)

add_executable(hello-world main.cc)

target_link_libraries(hello-world PUBLIC Library)