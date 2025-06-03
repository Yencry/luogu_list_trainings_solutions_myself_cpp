#include <iostream>
#include <array>
#include <string>
#include <algorithm>

using namespace std;
namespace
{
	int readIn()
	{
		int a;
		cin >> a;
		return a;
	}
}

int main() {
	array<int,3> number;
	for (auto& in : number) in = readIn();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	string litter;getline(cin, litter);
	std::ranges::sort(number);
	if (litter[0] == 'A') cout << number[0] << ' ';
	if (litter[0] == 'B') cout << number[1] << ' ';
	if (litter[0] == 'C') cout << number[2] << ' ';
	if (litter[1] == 'A') cout << number[0] << ' ';
	if (litter[1] == 'B') cout << number[1] << ' ';
	if (litter[1] == 'C') cout << number[2] << ' ';
	if (litter[2] == 'A') cout << number[0];
	if (litter[2] == 'B') cout << number[1];
	if (litter[2] == 'C') cout << number[2];
}
