#include <stdio.h>
int main()
{
    int a;
    int n=0;
    while(1){
        scanf("%d", &a);
        if(a==0){
            break;
        }
        else if(a%3!=0 && a%5!=0){
            n++;
        }
    }
    printf("%d", n);
}