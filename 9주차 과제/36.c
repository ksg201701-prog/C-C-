#include <stdio.h>

int main(void)
{
    for (int dan = 2; dan <= 4; dan++)
    {
        for (int i = 1; i <= 5; i++)
        {
            printf("%d * %d = %2d", dan, i, dan * i);
            if (i < 5)
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}