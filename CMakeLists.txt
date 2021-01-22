# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("embedded_python_in_cpp_prototype")

# Include sub-projects.
add_subdirectory("src")
