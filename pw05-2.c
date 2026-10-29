#include <stdio.h>
#define HEIGHT 5
int main(void)
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}