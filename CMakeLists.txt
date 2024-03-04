cmake_minimum_required(VERSION 3.20)

project(JenkinsLabs)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_STANDARD_REQUIRED OFF)

add_executable(JenkinsLabs main.cpp)

target_include_directories(JenkinsLabs PUBLIC "${PROJECT_BINARY_DIR}")  
