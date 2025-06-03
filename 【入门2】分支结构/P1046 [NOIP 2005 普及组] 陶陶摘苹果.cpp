#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

namespace
{
	int readIn() {
		int value;
		cin >> value;
		return value;
	}
}


int main() {
	array<int, 10> apples_high;
	for (auto& apple_high : apples_high) apple_high = readIn();
	auto hand_high = readIn() + 30;
	cout << ranges::count_if(apples_high, [hand_high](auto h) { return h <= hand_high; });
	return 0;
}
