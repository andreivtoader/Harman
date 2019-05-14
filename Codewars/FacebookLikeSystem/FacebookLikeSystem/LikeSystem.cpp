#include "LikeSystem.h"



LikeSystem::LikeSystem()
{
}


LikeSystem::~LikeSystem()
{
}


std::string LikeSystem::likes(const std::vector<std::string>& names)
{
	if (names.empty())
	{
		return "no one likes this.";
	}
	
	if (names.size() == 1)
	{
		return names.back() + " likes this";
	}

	if (names.size() == 2)
	{
		return names.front() + " and " + names.back() + " like this";
	}

	if (names.size() == 3)
	{
		return names.front() + ", " + names[1] + " and " + names.back() + " like this";
	}

	return names.front() + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
}
