cmake_minimum_required(VERSION 3.15)
project(decimal-binary-converter CXX)

add_executable(decimal-binary-converter)

target_sources(
        decimal-binary-converter
        PRIVATE
            main.cpp
            project.cpp
            project.hpp
)