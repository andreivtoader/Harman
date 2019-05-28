#include "ArithmeticProgression.h"

#include <algorithm>
#include <iostream>

ArithmeticProgression::ArithmeticProgression()
{
}


ArithmeticProgression::~ArithmeticProgression()
{
}

long ArithmeticProgression::findMissing(const std::vector<long>& list)
{
	auto missingElement = LONG_MIN;

	if (list.size() < 3)
	{
		return missingElement;
	}

	const auto progressionDifference = (list.back() - list.front()) / static_cast<long>(list.size());

	auto currentDifference = LONG_MIN;

	for (auto i = 1; i < list.size(); ++i)
	{
		const auto currentDifference = list[i] - list[i - 1];

		if (currentDifference != progressionDifference)
		{
			missingElement = list[i] - progressionDifference;
			break;
		}
	}

	return missingElement;
}

void ArithmeticProgression::printMissingMember(const std::vector<long>& list)
{
	std::cout << "The missing member is: " << findMissing(list) << std::endl;
}
