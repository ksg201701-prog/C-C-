#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int k = (i <= n) ? i : 2 * n - i;   
        int spaces = k - 1;
        int stars = 2 * (n - k) + 1;

        for (int j = 0; j < spaces; j++)
            printf(" ");

        for (int j = 0; j < stars; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}