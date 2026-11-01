#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = (i <= n) ? i : 2 * n - i;

        for (int j = 0; j < stars; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}