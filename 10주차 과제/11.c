#include <stdio.h>

int main(void) {
    int arr[10];
    int i;
    int max, min;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d %d\n", max, min);

    return 0;
}