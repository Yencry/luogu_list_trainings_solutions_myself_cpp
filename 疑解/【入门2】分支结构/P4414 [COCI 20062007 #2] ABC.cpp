#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <limits>
#include <ranges> 

using namespace std;
namespace{
	int readIn(){
		int a;
		cin >> a ;
		return a;
	}
}

int main() {
	char command[] = { 'A', 'B', 'C' };	// A:0, B:1, C:2
	array<int,3> numbers;
	for (auto& in : numbers) in = readIn();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	string litter;getline(cin, litter);
	std::ranges::sort(numbers);
	int i = 0;
	for (char ch : litter){
		const auto index = std::ranges::find(command, ch) - begin(command);
		cout << numbers[index];
		if (i < 2) cout << " ";
		i++;
	}
	return 0;
}
