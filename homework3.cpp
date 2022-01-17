
#include <iostream>

extern const int a, b, c, d;
extern float e;

int main()
{
	float f = a * (b + e); // a * (b + (c / d)); e = c / d

	std::cout << f;
}

