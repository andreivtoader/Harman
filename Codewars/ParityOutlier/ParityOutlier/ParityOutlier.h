#pragma once

#include <vector>

class ParityOutlier
{
public:
	ParityOutlier();
	~ParityOutlier();

	int FindOutlier(const std::vector<int>& arr);
};

