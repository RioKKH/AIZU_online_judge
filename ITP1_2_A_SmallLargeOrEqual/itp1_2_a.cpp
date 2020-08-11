#include <iostream>
//#include <stdio.h>

int main(int argc, char const* argv[])
{
	int a, b;
	std::cin >> a >> b;
	//scanf('%d %d, &a, &b);' 
	if (a < b) {
		std::cout << "a < b" << std::endl;
		//printf("a < b\n");
	} else if (a == b) {
		std::cout << "a == b" << std::endl;
		//printf("a == b\n");
	} else if (a > b) {
		printf("a > b\n");
		//std::cout << "a > b" << std::endl;
	}

	return 0;
}
