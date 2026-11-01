#include <stdio.h>

int main(void)
{
    double b, h;
    char ch;

    do
    {
        scanf("%lf %lf", &b, &h);
        printf("Triangle area = %.1f\n", b * h / 2);

        printf("Continue? ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');

    return 0;
}