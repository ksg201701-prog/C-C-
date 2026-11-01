#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a>=2 && a<=50){
        for(int i=1; i<=a; i++){
            if(i%2 == 0){
                printf("%d ", i);
            }
        }
    }
}