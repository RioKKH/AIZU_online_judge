#include <iostream>

int main(int argc, char const* argv[])
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		int x = i;
		if (x % 3 == 0) {
			std::cout << " " << i;
		} else {
			do {
				if (x % 10 == 3) {
					std::cout << " " << i;
					break;
				}
				x /= 10;
			} while(x);
		}
	}
	std::cout << std::endl;
	return 0;
}
