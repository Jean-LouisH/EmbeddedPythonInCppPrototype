# CMakeList.txt : CMake project for EmbeddedPythonInCppPrototype, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (embedded_python_in_cpp_prototype   "main.cpp" "hi_res_timer.cpp" "hi_res_timer.hpp")

# TODO: Add tests and install targets if needed.
