#include <stdio.h>

int main(void)
{
    int n;
    int num = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i; j++)
            printf(" ");

        for (int j = 0; j < n - i; j++)
        {
            if (j > 0) printf(" ");
            printf("%d", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}