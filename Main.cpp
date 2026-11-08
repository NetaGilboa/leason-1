#include "Stack.h"
#include "Utils.h"

#include <iostream>
#include <sstream>
#include <cstdlib>

using std::cout;
using std::endl;

std::string popElementsAndGetPrintedStack(Stack* s)
{
	std::stringstream output;
	while (!isEmpty(s))
	{
		output << pop(s) << " ";
	}
	// removing the last letter (space)
	std::string outputString = output.str();
	outputString = outputString.substr(0, outputString.length() - 1);
	return outputString;
}

std::string arrayToString(int numbers[], int size)
{
	std::stringstream output;
	for (int i = 0; i < 10; i++)
	{
		output << numbers[i] << " ";
	}
	std::string outputString = output.str();
	outputString = outputString.substr(0, outputString.length() - 1);
	return outputString;
}

int main(int argc, char* argv[])
{
	std::string str1 = arrayToString(reverse10(), 10);
	std::cout << str1;
	return 0;
}

