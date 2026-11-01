#include <stdio.h>

int main(void)
{
    int n, num;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("%.2f", (double)sum / n);

    return 0;
}