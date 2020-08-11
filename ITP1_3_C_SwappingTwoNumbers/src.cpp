#include <iostream>

int main(int argc, char const* argv[])
{
	int x, y;
	for (int i=0; ; i++) {
		std::cin >> x >> y;
		if (x == 0 && y == 0) {
			break;
		} else if (x > y) {
			std::cout << y << " " << x << std::endl;
		} else {
			std::cout << x << " " << y << std::endl;
		}
	}
	return 0;
}
