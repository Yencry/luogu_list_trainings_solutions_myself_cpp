#include <iostream>
#include <iomanip> 
#include <type_traits>

int main() {
	int s, v, spend_time, hh = 7, ss = 60; int num10 = 10;
	std::cin >> s >> v;
	spend_time = s / v;
	if (s % v != 0) {
		num10 = 11;
	}

	if (spend_time < 60)
	{
		ss -= spend_time; ss -= num10;
		if (ss < 0)
		{
			ss += 60;
			hh -= 1;
		}
		std::cout << std::setfill('0')
			<< std::setw(2) << hh << ':'
			<< std::setw(2) << ss;
	}
	else if (spend_time < 480)
	{
		hh -= spend_time / 60;
		ss -= spend_time % 60; ss -= 10;
		if (ss < 0)
		{
			ss += 60;
			hh -= 1;
		}
		std::cout << std::setfill('0')
			<< std::setw(2) << hh << ':'
			<< std::setw(2) << ss;
	}
	else
	{
		hh = 24 - (spend_time / 60) + 7;
		ss -= spend_time % 60; ss -= 10;
		if (ss < 0)
		{
			ss += 60;
			hh -= 1;
		}
		std::cout << std::setfill('0')
			<< std::setw(2) << hh << ':'
			<< std::setw(2) << ss;
	}
}