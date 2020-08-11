#include <iostream>
#include <algorithm>

int main(int argc, char const* argv[])
{
	int n, tmp;
	int imax = -1000000;
	int imin = 1000000;
	long long isum = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> tmp;
		imax = std::max(imax, tmp);
		imin = std::min(imin, tmp);
		isum += tmp;
	}
	std::cout << imin << " " << imax << " " << isum << std::endl;
	return 0;
}
