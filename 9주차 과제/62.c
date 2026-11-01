#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2 * (n - i); j++)
            printf(" ");

        for (int j = 1; j <= i; j++)
        {
            if (j > 1) printf(" ");
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}