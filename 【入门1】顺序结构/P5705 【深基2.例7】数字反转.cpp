#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string input;
	std::getline(std::cin, input);
	std::reverse(input.begin(), input.end());
	const double number = std::stod(input);
	std::cout << number;
	return 0;
}
