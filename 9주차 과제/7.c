#include <stdio.h>

int main() {
    int n;
    int cnt = 0;
    int sum = 0;

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        cnt++;
        sum += n;
    }

    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    
    if (cnt > 0) {
        printf("avg = %.2f\n", (double)sum / cnt);
    }

    return 0;
}