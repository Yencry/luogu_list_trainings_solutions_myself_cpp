#include <iostream>
#include <iomanip>

int main() {
	double t; int n;
	std::cin >> t >> n;
	std::cout << std::fixed << std::setprecision(3) << t / n << '\n' << n * 2;
	return 0;
}
