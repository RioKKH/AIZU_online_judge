#include <iostream>

int main(int argc, char const* argv[])
{
	int W, H, x, y, r;
	std::cin >> W >> H >> x >> y >> r;

	if (x-r < 0 || W < x+r || y-r < 0 || H < y+r) {
		std::cout << "No" << std::endl;
	} else {
		std::cout << "Yes" << std::endl;
	}
	return 0;
}
