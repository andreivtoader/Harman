#include <vector>

#include "ArithmeticProgression.h"

int main()
{
	std::vector<long> inputVector = { 1, 3, 5, 9 };
	std::vector<long> inputVector2 = { -1, -5 , -7 };

	ArithmeticProgression progression;

	progression.findMissing(inputVector2);
	//progression.printMissingMember(inputVector2);

	int a = 3;
}