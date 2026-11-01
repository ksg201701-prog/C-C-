#include <stdio.h>

int main(void)
{
    char ch = 'a';
    int num = 1;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", ch);
            ch++;
        }

        for (int j = 0; j < 5 - i; j++)
        {
            if (j > 0) printf(" ");
            printf("%d", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}