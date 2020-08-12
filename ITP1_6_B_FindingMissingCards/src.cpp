#include <stdio.h>
#include <vector>

void Output(const char& suit, const std::vector<int>& vec) {
	for (int i = 1; i <= 13; i++) {
		if (vec[i] == 0) {
			printf("%c %d\n", suit, i);
		}
	}
}

                   
int main(int argc, char const* argv[])
{

	int n, tmp;
	char suit[2];

	std::vector<int> S(14, 0);
	std::vector<int> H(14, 0);
	std::vector<int> C(14, 0);
	std::vector<int> D(14, 0);

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d", suit, &tmp);
		//printf("%s %d\n", suit, tmp);
		switch(suit[0]) {
			case 'S':
			   S[tmp] = 1;
			   break;
			case 'H':
			   H[tmp] = 1;
			   break;
			case 'C':
			   C[tmp] = 1;
			   break;
			case 'D':
			   D[tmp] = 1;
			   break;
		}
	}

	Output('S', S);
	Output('H', H);
	Output('C', C);
	Output('D', D);

	return 0;
}
