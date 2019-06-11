#include "ParityOutlier.h"

#include <algorithm>

ParityOutlier::ParityOutlier()
{
}


ParityOutlier::~ParityOutlier()
{
}

bool IsEven(int number)
{
	return number % 2 == 0;
}

bool IsOdd(int number)
{
	return number % 2 != 0;
}

int ParityOutlier::FindOutlier(const std::vector<int>& arr)
{
	if (arr.size() < 3)
	{
		return -1;
	}

	int element = -1;

	const auto numberOfEvenElements = std::count_if(arr.begin(), arr.end(), IsEven);

	if (numberOfEvenElements == 1)
	{
		element = *std::find_if(arr.begin(), arr.end(), IsEven);
	}
	else
	{
		element = *std::find_if(arr.begin(), arr.end(), IsOdd);
	}

	return element;
}
