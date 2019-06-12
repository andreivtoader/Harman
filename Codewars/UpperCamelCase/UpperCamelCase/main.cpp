#include <iostream>
#include "UpperCamelCase.h"

int main()
{
	UpperCamelCase solution;

	std::cout << solution.to_camel_case("the-stealth-warrior") << std::endl;
	std::cout << solution.to_camel_case("The-stealth-warrior") << std::endl;
	
	return 0;
}