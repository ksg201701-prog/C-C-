#include <stdio.h>

int main(void) {
    int arr[10];
    int i;
    int oddSum = 0;
    int evenSum = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            oddSum += arr[i];
        } else {
            evenSum += arr[i];
        }
    }

    printf("odd : %d\n", oddSum);
    printf("even : %d\n", evenSum);

    return 0;
}