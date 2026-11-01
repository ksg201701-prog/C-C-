#include <stdio.h>
int main()
{   
    int a;
    int n = 0;
    for(int i=0; i<10; i++){
        scanf("%d",&a);
        if(a%2==0){
            n++;
        }
    }
    printf("Even numbers = %d", n);
}