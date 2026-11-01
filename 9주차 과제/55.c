#include <stdio.h>

int main(void)
{
    int n;
    int num = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j > 1) printf(" ");
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}