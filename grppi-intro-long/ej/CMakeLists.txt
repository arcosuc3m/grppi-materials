cmake_minimum_required(VERSION 3.5)
project(grppi-intro VERSION 1.0 LANGUAGES CXX)

# Build binary directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

add_subdirectory(src)
