#include <stdio.h>

int main(void)
{
    int r, c;
    scanf("%d %d", &r, &c);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}