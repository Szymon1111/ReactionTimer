#include "pch.h"
#include "Stopwatch.h"


void Stopwatch::start() {
	this->startTime = high_resolution_clock::now();
}

void Stopwatch::stop() {
	this->finishTime = high_resolution_clock::now();
}

long long Stopwatch::duration() {
	return duration_cast<milliseconds>(this->finishTime - this->startTime).count();
}
