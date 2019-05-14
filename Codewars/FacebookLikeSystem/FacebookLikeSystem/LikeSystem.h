#pragma once

#include <string>
#include <vector>

class LikeSystem
{
public:
	LikeSystem();
	~LikeSystem();

	std::string likes(const std::vector<std::string>& names);
};

