#include <stdio.h>
int main(void)
{
	int n;
	while (1)
	{
		printf("Введите N: ");
		if (scanf("%d", &n) != 1 || n <= 0)
		{
			break;
		}
		double sum = 0.0;
		for (int i = 1; i <= n; i++)
		{
			double term = 1.0 / (1 << i);
			sum += term;
		}
		printf("SUM: %.6f\n", sum);
	}
	return 0;
}