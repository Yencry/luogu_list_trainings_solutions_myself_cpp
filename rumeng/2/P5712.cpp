#include <iostream>
#include <string>

int main() {
	int num;
	std::cin >> num;
	std::string word = num > 1 ? "apples":"apple";
	std::cout << "Today, I ate " << num << " " << word << '.';
	return 0;
}
