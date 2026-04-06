cmake_minimum_required(VERSION 3.10)
project(ModularPipelineExample VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Define executable
add_executable(App src/main.cpp)

# Enable testing
enable_testing()
add_test(NAME BasicTest COMMAND App --test)
