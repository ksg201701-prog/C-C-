#include <stdio.h>
int main()
{   int a;
    int n = 0;
    int m = 0;
    while(1){
        scanf("%d", &a);
        if(a==0){
            printf("odd : %d\n", m);
            printf("even : %d", n);
            break;
        }
        else if(a%2==0){
            n++;
        }
        else if(a%2==1){
            m++;
        }
    }
}