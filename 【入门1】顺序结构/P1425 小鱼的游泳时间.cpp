#include <iostream>

int main() {
	int a, b, c, d, e, f;
	std::cin >> a >> b >> c >> d;
	if (d - b < 0)
	{
		e = c - a - 1; f = d - b + 60;
	}
	else
	{
		e = c - a; f = d - b;
	}
	std::cout << e << " " << f;
	return 0;
}
