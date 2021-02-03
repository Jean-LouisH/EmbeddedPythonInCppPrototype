#ifdef _DEBUG
#undef _DEBUG
#include <python.h>
#define _DEBUG
#else
#include <python.h>
#endif

#include "hi_res_timer.hpp"
#include "cpp_to_python.hpp"
#include "python_to_cpp.hpp"

int main(int argc, char* argv[])
{
	HiResTimer timer;
	CppToPython cppToPython;
	PythonToCpp pythonToCpp;

	//Testing if the library is called, for now.
	timer.setStart();
	Py_Initialize();
	timer.setEnd();
	timer.printDelta_ms("Py_Initialize()");

	timer.setStart();
	PyRun_SimpleString("from time import time, ctime\nprint('Today is', ctime(time()))\n");
	timer.setEnd();
	timer.printDelta_ms("\nPyRun_SimpleString");

	return 0;
}