#include <stdio.h>
int main()
{   int a;
    while(1){
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number: ");
        scanf("%d", &a);
        
        printf("\n");
        if(a ==1){
            printf("You selected Input.\n\n");
        }
        else if(a==2){
            printf("You selected Output.\n\n");
        }
        else if(a==3){
            printf("You selected Delete.\n\n");
        }
        else if(a==4){
            printf("You selected Finish.\n\n");
            break;
        }
        else{
            printf("Wrong input.\n\n");
        }
    }
}