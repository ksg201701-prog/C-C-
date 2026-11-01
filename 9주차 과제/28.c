#include <stdio.h>
int main()
{
    int a;
    int sum =0;
    scanf("%d", &a);
    if(a<=100){
        for(int i=a; i<=100;  i++){
            sum += i;

        }
    }
    printf("%d", sum);
}