#include <iostream>

int main(int argc, char const* argv[])
{
	int a, b, c, N=0;
	std::cin >> a >> b >> c;

	for (int i = a; i <= b; i++)
		if (c % i == 0) N++;

	std::cout << N << std::endl;
	return 0;
}
