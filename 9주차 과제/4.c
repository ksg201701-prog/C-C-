#include <stdio.h>
int main()
{
    int a;
    int b = 1;
    int sum = 0;

    scanf("%d", &a);

    while(b <= a){
        sum += b;
        b++;
    }
    printf("%d", sum);

    return 0;
}