#include <stdio.h>

int main(void)
{
    int n;
    int num = 1;
    char ch = 'A';

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            printf("%d ", num);
            num++;
        }

        for (int j = 0; j < i; j++)
        {
            if (j > 0) printf(" ");
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}
