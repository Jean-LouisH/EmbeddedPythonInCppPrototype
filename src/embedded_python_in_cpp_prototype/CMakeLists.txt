# CMakeList.txt : CMake project for EmbeddedPythonInCppPrototype, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (embedded_python_in_cpp_prototype   
	"main.cpp" 
	"hi_res_timer.cpp"
	"hi_res_timer.hpp" 
	"cpp_to_python.hpp" 
	"cpp_to_python.cpp" 
	"python_to_cpp.hpp"
	"python_to_cpp.cpp")

find_library(Python37 python37.lib PATHS ../../thirdparty/python37/lib)

include_directories(
		../../thirdparty/python37/include
)

target_link_libraries (embedded_python_in_cpp_prototype
		${Python37}
)
