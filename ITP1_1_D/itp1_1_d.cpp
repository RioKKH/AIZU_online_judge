#include <iostream>

int main(int argc, char const* argv[])
{
	int S, h, m, s;
	std::cin >> S;
	h = S/3600;
	m = (S%3600)/60;
	s = S%60;
	std::cout << h << ":" << m << ":" << s << std::endl;
	return 0;
}
