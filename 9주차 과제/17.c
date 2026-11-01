#include <stdio.h>

int main() {
    int n;
    int num = 0, sum = 0;
    while(1){
        scanf("%d", &n);
        if(n<0 || n>100){
            break;
        }else{
            sum+=n;
            num++;
        }
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f", sum/(num*1.0));

    return 0;
}
