#pragma once

#include <vector>

class ArithmeticProgression
{
public:
	ArithmeticProgression();
	~ArithmeticProgression();

	long findMissing(const std::vector<long>& list);
	void printMissingMember(const std::vector<long>& list);
};

