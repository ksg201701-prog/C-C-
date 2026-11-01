#include <stdio.h>
int main()
{ 
    int a;
    int n = 0;
    int m = 0;
    for(int i=0; i<10; i++){
        scanf("%d", &a);
        if(a%3==0){
            n++;
        }
        if(a%5==0){
            m++;
        }
    }
    printf("Multiples of 3 : %d\n", n);
    printf("Multiples of 5 : %d", m);
}