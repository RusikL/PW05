#include <stdio.h>
double calc(double a, double b)
{
	return (a * a * a - b * b * b) / (a * a - b * b);
}
int main(void)
{
	double a, b;
	while (scanf("%lf %lf", &a, &b) == 2 && a * a != b * b)
		{
			printf("%.4f\n", calc(a, b));
		}
	return 0;
}
