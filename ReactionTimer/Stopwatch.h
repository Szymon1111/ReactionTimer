#pragma once

#include <chrono>

using namespace std::chrono;


class Stopwatch
{

	private:
		steady_clock::time_point startTime;
		steady_clock::time_point finishTime;

	public:
		
		void start();
		void stop();
		long long duration();

};

