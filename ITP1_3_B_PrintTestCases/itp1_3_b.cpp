#include <iostream>

int main(int argc, char const* argv[])
{
	int x;

	for (int i=1; ; i++) {
		std::cin >> x;
		if (x == 0) {
			break;
		} else {
			std::cout << "Case " << i << ": " << x << std::endl;
		}
	}
	return 0;
}
