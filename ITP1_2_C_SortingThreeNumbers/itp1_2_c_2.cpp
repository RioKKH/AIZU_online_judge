#include <iostream>

void swap(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main(int argc, char const* argv[])
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if(a > b) swap(a, b);
	if(b > c) swap(b, c);
	if(a > b) swap(a, b);

	std::cout << a << " " << b << " " << c << std::endl;

	return 0;
}
