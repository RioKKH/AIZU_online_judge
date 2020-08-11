#include <iostream>

int main(int argc, char const* argv[])
{
	int H, W;
	while(true) {
		std::cin >> H >> W;
		if (H == 0 && W == 0) {
			break;
		}
		else {
			for (int h = 0; h < H; h++) {
				for (int w = 0; w < W; w++) {
					std::cout << "#";
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
