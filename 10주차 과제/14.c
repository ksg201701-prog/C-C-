#include <stdio.h>

int main(void) {
    int arr[10];
    int i;
    int evenSum = 0;
    int oddSum = 0;
    double avg;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 1) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    avg = oddSum / 5.0;

    printf("sum : %d\n", evenSum);
    printf("avg : %.1f\n", avg);

    return 0;
}