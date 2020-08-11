#include <iostream>
#include <iomanip>
#include <math.h>

int main(int argc, char const* argv[])
{
	double r;
	double area, circumference;
	std::cin >> r;

	area = M_PI * r * r;
	circumference = 2 * M_PI * r;

	std::cout << std::fixed << std::setprecision(6) << area;
	std::cout << " " << circumference << std::endl;

	return 0;
}
