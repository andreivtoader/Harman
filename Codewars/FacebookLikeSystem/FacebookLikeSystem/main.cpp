#include <iostream>
#include <string>
#include <vector>

#include "LikeSystem.h"

int main()
{
	LikeSystem theSystem;

	const std::vector<std::string> fourNames = { "Alex", "Jacob", "Mark", "Max" };
	const std::vector<std::string> threeNames = { "Alex", "Jacob", "Mark" };
	const std::vector<std::string> twoNames = { "Alex", "Jacob" };
	const std::vector<std::string> oneName = { "Alex" };
	const std::vector<std::string> emptyNames = { };

	const auto output = theSystem.likes(emptyNames);

	std::cout << output << std::endl;

	return 0;
}