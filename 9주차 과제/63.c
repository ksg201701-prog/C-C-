#include <stdio.h>

int main(void)
{
    int n;
    char ch = 'A';
    int num = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            printf("%c ", ch);
            ch++;
        }

        for (int j = 0; j < i - 1; j++)
        {
            if (j > 0) printf(" ");
            printf("%d", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}