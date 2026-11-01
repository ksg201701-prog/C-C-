#include <stdio.h>

int main(void)
{
    for (int i = 2; i <= 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j > 0) printf(" ");
            printf("%d", i + j);
        }
        printf("\n");
    }
}