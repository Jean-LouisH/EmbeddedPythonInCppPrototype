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