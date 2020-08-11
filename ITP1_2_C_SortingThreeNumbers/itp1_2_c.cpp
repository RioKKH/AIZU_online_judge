#include <iostream>
#include <vector>
#include <algorithm>
/*
void swap(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}
*/

int main(int argc, char const* argv[])
{
	std::vector<int> v(3);

	for (int i=0; i<3; i++) {
		std::cin >> v.at(i);
	}

	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (v.at(j) > v.at(j+1)) {
				std::swap(v.at(j), v.at(j+1));
			}
		}
	}
	std::cout << v.at(0) << " " << v.at(1) << " " << v.at(2) << std::endl;
	/*
	for (const auto &x : v) {
		std::cout << x << std::endl;
	}
	*/
	return 0;
}
