#include <stdio.h>
#include <math.h>

int main(int argc, char const* argv[])
{
	double r;
	double area, circumference;
	scanf("%lf", &r);

	area = M_PI * r * r;
	circumference = 2 * M_PI * r;

	printf("%.5lf %.5lf\n", area, circumference);

	return 0;
}
