#include "UpperCamelCase.h"

#include <iostream>
#include <locale>

UpperCamelCase::UpperCamelCase()
{
}


UpperCamelCase::~UpperCamelCase()
{
}

std::string UpperCamelCase::to_camel_case(std::string text)
{
	auto found = text.find_first_of("-_");
	
	while (found != std::string::npos)
	{

		const auto upperLetter = std::toupper(text[found + 1], std::locale());
		text[found] = upperLetter;
		
		text.erase(found + 1, 1);

		found = text.find_first_of("-_", found + 1);
	}

	return text;
}
