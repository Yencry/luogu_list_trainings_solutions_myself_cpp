#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	string isbn;
	getline(cin, isbn);
	int weight = 1;int sum = 0;
	for (size_t i = 0; i < isbn.size() && weight <= 9; ++i) {
		if (isdigit(isbn[i])) {
			sum += (isbn[i] - '0') * weight;
			++weight;
		}
	}
	if (sum % 11 == 10){
		if (isbn.back() == 'X')
		{
			cout << "Right";
			return 0;
		}
		isbn.back() = 'X';
		cout << isbn;
		return 0;
	}
	if (const int result = sum % 11;
		result == isbn.back() - '0') cout << "Right";
	else{
		isbn.back() = static_cast<char>(result + '0');
		cout << isbn;
	}
	return 0;
	}