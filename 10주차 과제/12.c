#include <stdio.h>

int main(void) {
    int arr[100];
    int n = 0;
    int i;
    int max, min;

    while (n < 100) {
        scanf("%d", &arr[n]);
        if (arr[n] == 0) {
            break;
        }
        n++;
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", max - min);

    return 0;
}