
#include <iostream>

int main()
{
	int a = 10, b;
	b = (a <= 21) ? 21 - a : (21 - a) * 2;
	std::cout << b << std::endl;

	int c = 30, d;
	d = (c <= 21) ? 21 - c : (21 - c) * 2;
	std::cout << d << std::endl;
}