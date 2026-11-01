#include <stdio.h>
int main()
{
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            printf("%d ",i );
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}