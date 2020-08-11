#include <stdio.h>
#include <vector>

void output(char suit, std::vector vec) {
	for (int i = 1; i <= 13; i++) {
		if (vec[i] == 0) {
			printf("%c %d\n", suit, i);
		}
	}
}

                   
int main(int argc, char const* argv[])
{

	std::vector<int> S(13, 0);
	std::vector<int> H(13, 0);
	std::vector<int> C(13, 0);
	std::vector<int> D(13, 0);

	int n, tmp;
	char suit;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d", &suit, &tmp);
		switch(suit) {
			case 'S':
			   S.at(tmp) = 1;
			   break;
			case 'H':
			   H.at(tmp) = 1;
			   break;
			case 'C':
			   C.at(tmp) = 1;
			   break;
			case 'D':
			   D.at(tmp) = 1;
			   break;
		}
	}

	for (int i = 1; i <= 13; i++) {
		if (S.at(i) == 0) {
			printf("S %d\'n", i);
		if v == 0
	return 0;
}
