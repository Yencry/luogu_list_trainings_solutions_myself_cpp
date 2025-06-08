#include <iostream>

int main() {
	int num	;
	std::cin  >> num;
	bool prop1 = num % 2 == 0;
	bool prop2 = num > 4 && num <= 12;

	std::cout << (prop1 && prop2 ? 1 : 0) << ' ';
	std::cout << (prop1 || prop2 ? 1 : 0) << ' ';
	std::cout << (prop1 != prop2 ? 1 : 0) << ' ';
	std::cout << (!prop1 && !prop2 ? 1 : 0);
	return 0;
}
