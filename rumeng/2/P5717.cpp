#include <iostream>
#include <array>

namespace {
	int read_i()
	{
		int value;
		std::cin >> value;
		return value;
	}
}

int main() {
	std::array<int, 3> sides;
	for (auto& cin : sides) cin = read_i();

	bool is_not_triangle = sides[0] < sides[1] + sides[2] &&
		sides[1] < sides[0] + sides[2] &&
		sides[2] < sides[0] + sides[1];
	if (!is_not_triangle)
	{
		std::cout << "Not triangle";
		return 0;
	}

	int square0 = sides[0] * sides[0], square1 = sides[1] * sides[1], square2 = sides[2] * sides[2];
	bool is_right_triangle = square0 == square1 + square2 || square1 == square0 + square2 || square2 == square0 + square1;
	bool is_acute_triangle = square0 < square1 + square2 && square1 < square0 + square2 && square2 < square0 + square1;
	bool is_obtuse_triangle = square0 > square1 + square2 || square1 > square0 + square2 || square2 > square0 + square1;
	bool is_isosceles_triangle = sides[0] == sides[1] || sides[1] == sides[2] || sides[2] == sides[0];
	bool is_equilateral_triangle = sides[0] == sides[1] && sides[1] == sides[2];

	if (is_right_triangle) std::cout << "Right triangle" << '\n';
	if (is_acute_triangle) std::cout << "Acute triangle" << '\n';
	if (is_obtuse_triangle) std::cout << "Obtuse triangle" << '\n';
	if (is_isosceles_triangle) std::cout << "Isosceles triangle" << '\n';
	if (is_equilateral_triangle) std::cout << "Equilateral triangle";
	return 0;
}