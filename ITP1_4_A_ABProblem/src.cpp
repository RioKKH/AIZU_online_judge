#include <iostream>
#include <iomanip>

int main(int argc, char const* argv[])
{
	int a, b, d, r;
	double f;

	std::cin >> a >> b;

	d = a / b;
	r = a % b;
	f = static_cast<double>(a) / static_cast<double>(b);
	std::cout << d << " ";
	std::cout << r << " ";
	std::cout << std::fixed << std::setprecision(5) << f << std::endl;

	return 0;
}
