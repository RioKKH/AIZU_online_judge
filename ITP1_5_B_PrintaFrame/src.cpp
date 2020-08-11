#include <iostream>

int main(int argc, char const* argv[])
{
	int H, W;
    while(true) {
		std::cin >> H >> W;
		if (H == 0 && W == 0) break;
		for (int h = 0; h < H; h++) {
			for (int w = 0; w < W; w++) {
                if (h == 0 || h == H-1 || w == 0 || w == W-1) {
					std::cout << "#";
				} else {
					std::cout << ".";
				}
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
	return 0;
}
