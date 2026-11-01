#include <stdio.h>
int main()
{ 
    int a;
    int sum = 0;
    for(int i=1; i<6; i++){
        scanf("%d", &a);
        sum +=a;
    }
    double avg = sum / 5.0;
    printf("sum : %d\n", sum);
    printf("avg : %.1f", avg);
}