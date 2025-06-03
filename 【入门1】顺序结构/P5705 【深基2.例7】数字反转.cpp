#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string input;
	std::getline(std::cin, input);
	std::reverse(input.begin(), input.end());//使用 std::reverse 必须显式包含 <algorithm> 头文件
	double num = std::stof(input);
	std::cout << num;
	return 0;
}
