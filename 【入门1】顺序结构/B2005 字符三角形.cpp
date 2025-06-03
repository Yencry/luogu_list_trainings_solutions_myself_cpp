#include <iostream>

int main() {
	char input_char; constexpr char space_char = ' ';
	std::cin.get(input_char);
	std::cout << space_char << space_char << input_char << '\n';
	std::cout << space_char << input_char << input_char << input_char << '\n';
	std::cout << input_char << input_char << input_char << input_char << input_char;
	return 0;
}
