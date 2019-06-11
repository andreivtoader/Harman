#include <iostream>
#include <vector>

#include "ParityOutlier.h"

int main()
{
	ParityOutlier solution;
	
	std::vector<int> input = { 2, 4, 0, 100, 4, 11, 2602, 36 };
	std::vector<int> input2 = { 160, 3, 1719, 19, 11, 13, -21 };
	std::vector<int> input3 = { 2, -6, 8, -10, -3 };

	std::cout << "Outlier:" << solution.FindOutlier(input) << std::endl;
	std::cout << "Outlier:" << solution.FindOutlier(input2) << std::endl;
	std::cout << "Outlier:" << solution.FindOutlier(input3) << std::endl;
	
	return 0;
}