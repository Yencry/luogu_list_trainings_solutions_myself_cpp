#include <iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	int e = a, f = b, g = c;
	for (int i = 0; i < 3; i++) {
		if (e > f) {
			int temp = e;
			e = f;
			f = temp;
		}
		if (f > g) {
			int temp = f;
			f = g;
			g = temp;
		}
	}
	std::cout << e << " " << f << " " << g;
	return 0;
}
