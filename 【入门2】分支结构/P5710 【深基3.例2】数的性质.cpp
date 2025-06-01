//#include <iostream>
//
//int main() {
//	int m;
//	std::cin >> m;
//	if (m % 2 == 0 && m > 4 && m <= 12) std::cout << 1 << ' ';
//	else std::cout << 0 << ' ';
//
//	if (m % 2 == 0 || (m > 4 && m <= 12)) std::cout << 1 << ' ';
//	else std::cout << 0 << ' ';
//
//	if (m % 2 == 0 && (m <= 4 || m > 12)) std::cout << 1 << ' ';
//	else if (m % 2 != 0 && (m > 4 && m <= 12)) std::cout << 1 << ' ';
//	else std::cout << 0 << ' ';
//
//	if (m % 2 != 0 && (m <= 4 || m > 12)) std::cout << 1;
//	else std::cout << 0;
//
//	return 0;
//}

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