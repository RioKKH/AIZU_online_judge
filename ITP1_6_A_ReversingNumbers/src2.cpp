#include <stdio.h>

int main(int argc, char const* argv[])
{
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i=0; i<n; i++) scanf("%d", &A[i]);

	for (int i=n-1; i>0; i--){
		printf("%d ", A[i]);
	}
	printf("%d\n", A[0]);

	return 0;
}
