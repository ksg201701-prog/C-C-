#include <stdio.h>
int main()
{
    int n;
    int m;
    int sum = 0;
    scanf("%d", &n);
    if(n<=10){
        for(int i=0; i<n; i++){
            scanf("%d", &m);
            sum+=m;
        }
    }
    double avg = sum / (n*1.0);
    printf("avg : %.1f\n", avg);
    if(avg>=80){
        printf("pass");
    }
    else{
        printf("fail");
    }
}