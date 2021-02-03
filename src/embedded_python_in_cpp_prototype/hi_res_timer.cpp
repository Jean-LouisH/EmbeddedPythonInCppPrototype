#include "hi_res_timer.hpp"

uint64_t HiResTimer::getDelta_ns()
{
	return this->delta_ns;
}

void HiResTimer::setStart()
{
	this->start = std::chrono::high_resolution_clock::now();
}

void HiResTimer::setEnd()
{
	this->end = std::chrono::high_resolution_clock::now();
	this->delta_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
}

void HiResTimer::printDelta_ms(const char* routineName)
{
	printf("%s took %d milliseconds\n\n", 
		routineName, 
		(int)((double)this->getDelta_ns() / (1000.0 * 1000.0))
	);
}