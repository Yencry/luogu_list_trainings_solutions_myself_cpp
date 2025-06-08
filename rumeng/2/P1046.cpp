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
	cout << count_if(begin(apples_high),end(apples_high),[hand_high](int h) { return h <= hand_high; });
	return 0;
}
