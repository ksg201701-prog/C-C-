#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 9; i++)
    {
        for (int dan = 2; dan <= 4; dan++)
        {
            printf("%d * %d = %2d", dan, i, dan * i);
            if (dan < 4)
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}