#include <stdio.h>
int main(void)
{
	int i = 1;
	for (double x = 1.0; x <= 4.0; x += 0.5)
	{
		printf("%d %.4f %.4f\n", i, x, x * x * x);
		i++;
	}
	return 0;
}