#include <stdio.h>
int main(void)
{
	int n;
	printf("Введите N: ");
	scanf("%d", &n);
	while (n > 0)
	{
		double sum = 0.0;
		for (int i = 1; i <= n; i++)
		{
			double term = 1.0 / (1 << i);
			sum += term;
		}
		printf("SUM: %.6f\n", sum);
		printf("Введите N: ");
		scanf("%d", &n);
	}
	return 0;
}
