#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string input;
	std::getline(std::cin, input);
	std::reverse(input.begin(), input.end());
	double num = std::stof(input);
	std::cout << num;
	return 0;
}
