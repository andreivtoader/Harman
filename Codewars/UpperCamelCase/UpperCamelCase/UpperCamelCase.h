#pragma once

#include <string>

class UpperCamelCase
{
public:
	UpperCamelCase();
	~UpperCamelCase();

	std::string to_camel_case(std::string text);
};

