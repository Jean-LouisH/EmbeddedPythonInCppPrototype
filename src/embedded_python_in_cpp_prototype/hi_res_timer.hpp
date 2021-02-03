#pragma once

#include <stdint.h>
#include <chrono>

class HiResTimer
{
public:
	uint64_t getDelta_ns();
	void setStart();
	void setEnd();
	void printDelta_ms(const char* routineName);
	HiResTimer() :
		delta_ns(0)
	{}
private:
	uint64_t delta_ns;
	std::chrono::time_point<std::chrono::steady_clock> start;
	std::chrono::time_point<std::chrono::steady_clock> end;
};