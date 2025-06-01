#include <iostream>

int main() {
	double k;
	std::cin >> k;
	double sum = 0;	long long deno = 1;
	while (true) {
		sum += 1.0 / deno;
		if (sum > k) {
			std::cout << deno;
			break;
		}
		deno++;
	}
	return 0;
}