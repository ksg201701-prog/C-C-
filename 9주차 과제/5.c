#include <stdio.h>

int main()
{   int a;

    while(1){
        scanf("%d", &a);
        
        if(a > 100 || a <0){
            break;
        }
        else{
            if(a >= 80){
                printf("Pass\n");
            }
            else{
                printf("Fail\n");
            }
        }
    }
}