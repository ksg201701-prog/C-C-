#include <stdio.h>

int main(void)
{
    int n;
    int max = 1, min = 100;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        if (n < 1 || n > 100)
            continue;

        if (n > max) max = n;
        if (n < min) min = n;
    }

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);

    return 0;
}