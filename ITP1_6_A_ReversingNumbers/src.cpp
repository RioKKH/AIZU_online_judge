#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const* argv[])
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v.at(i);
	}

	std::reverse(std::begin(v), std::end(v));
	for (int i = 0; i < n-1; i++) {
		std::cout << v.at(i) << " ";
	}
	std::cout << v.at(n-1) << std::endl;

	/*
	for (int i = n-1; i > 0; i--) {
		std::cout << v.at(i) << " ";
	}
	std::cout << v.at(0);
	*/

	return 0;
}
