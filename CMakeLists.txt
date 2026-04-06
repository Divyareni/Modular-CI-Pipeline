cmake_minimum_required(VERSION 3.10)
project(ModularPipelineExample VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Define executable
add_executable(App src/main.cpp)

# Enable testing
enable_testing()
add_test(NAME BasicTest COMMAND App --test)

# Add pybind11
add_subdirectory(extern/pybind11)

# Create the Python module
pybind11_add_module(hw_lib src/bindings.cpp src/hardware_controller.cpp)

# Ensure it finds your header
target_include_directories(hw_lib PRIVATE src)
