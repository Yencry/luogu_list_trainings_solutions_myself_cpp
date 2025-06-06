#include <iostream>
#include <vector>
#include <array>
#include <algorithm>


int main() {
	int hourSchool, hourAfter;
	std::vector<int> allNumbers;
	for (int i = 0, numLines = 7; i < numLines; ++i) {
		std::cin >> hourSchool >> hourAfter;
		allNumbers.push_back(hourSchool);
		allNumbers.push_back(hourAfter);
	}

	std::array<int, 7> sadMood = {};
	for (int i = 0; i < 7; i++)
	{
		int day = i * 2;
		if (allNumbers[day] + allNumbers[day + 1] > 8)
		{
			sadMood[i] = allNumbers[day] + allNumbers[day + 1] - 8;
		}
		else sadMood[i] = 0;
	}

	auto maxIt = std::max_element(sadMood.begin(), sadMood.end());
	if (std::all_of(sadMood.begin(), sadMood.end(), [](int x) { return x == 0; })) {
		std::cout << 0 << std::endl;
	}
	else
		std::cout << maxIt - sadMood.begin() + 1 << std::endl;
	return 0;
}