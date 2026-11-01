#include <stdio.h>
int main()
{ 
    while(1){
        int a;
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        else{
            if(a>0){
                printf("positive number\n");
            }
            else{
                printf("negative number\n");
            }
        }
    }
    return 0;
}