#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int count;
        int spaces;

        if (i <= n)
        {
            count = i;
            spaces = 0;
        }
        else
        {
            count = 2 * n - i;
            spaces = 2 * (i - n);
        }

        for (int j = 0; j < spaces; j++)
            printf(" ");

        for (int j = 0; j < count; j++)
        {
            if (j > 0) printf(" ");
            printf("#");
        }

        printf("\n");
    }

    return 0;
}