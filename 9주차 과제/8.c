#include <stdio.h>

int main(void)
{
    int n;
    int small = 0, large = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n < 50)
            small++;
        else
            large++;

        if (n >= 100)
            break;
    }

    printf("small : %d\n", small);
    printf("large : %d\n", large);

    return 0;
}