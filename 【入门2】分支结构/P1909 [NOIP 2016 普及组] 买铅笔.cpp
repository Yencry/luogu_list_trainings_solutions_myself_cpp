#include <iostream>
#include <algorithm> 
#include <cmath>

int main() {
	int need_number;
	std::cin >> need_number;

	int spend_money[3] = {}, number_in_package, package_price;

	for (int i = 0, num_lines = 3, buy_many_number; i < num_lines; ++i) {
		std::cin >> number_in_package >> package_price;
		buy_many_number = static_cast<int>(ceil(static_cast<double>(need_number) / number_in_package));
		spend_money[i] = buy_many_number * package_price;
	}
	std::cout << *std::min_element(std::begin(spend_money), std::end(spend_money)) << '\n';
}