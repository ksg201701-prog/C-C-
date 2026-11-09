#include <stdio.h>

int main(void) {
    int arr[100];
    int n = 0;
    int i;
    int count = 0;
    int sum = 0;

    while (n < 100) {
        scanf("%d", &arr[n]);
        if (arr[n] == 0) {
            break;
        }
        n++;
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            count++;
            sum += arr[i];
        }
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / count);

    return 0;
}