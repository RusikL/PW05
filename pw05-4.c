#include <stdio.h>
int main(void)
{
	double arr[8] = { 2, 3, 5, 7, 11, 13, 17, 19 };
	double sum = 0.0;
	printf("Массив: ");
	for (int i = 0; i < 8; i++)
	{
		printf("%.2f ", arr[i]);
		sum += arr[i];
	}
	printf("\nСумма = %.2f\n", sum);
	return 0;
}