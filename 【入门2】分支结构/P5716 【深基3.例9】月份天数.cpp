#include <iostream>

int main() {
	int year, month, FebruaryDay = 28;
	std::cin >> year >> month;
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	if (isLeapYear) FebruaryDay = 29;
	switch (month) {
	case 1:
		std::cout << "31";
		break;
	case 2:
		std::cout << FebruaryDay;
		break;
	case 3:
		std::cout << "31";
		break;
	case 4:
		std::cout << "30";
		break;
	case 5:
		std::cout << "31";
		break;
	case 6:
		std::cout << "30";
		break;
	case 7:
		std::cout << "31";
		break;
	case 8:
		std::cout << "31";
		break;
	case 9:
		std::cout << "30";
		break;
	case 10:
		std::cout << "31";
		break;
	case 11:
		std::cout << "30";
		break;
	case 12:
		std::cout << "31";
		break;

	default:
        std::cout << "error";
	}
	return 0;
}