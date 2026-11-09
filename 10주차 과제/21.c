#include <stdio.h>

int main(void) {
    int arr[100];
    int n = 0;
    int i;

    while (n < 100) {
        scanf("%d", &arr[n]);
        if (arr[n] == 0) {
            break;
        }
        n++;
    }

    printf("%d\n", n);

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            printf("%d ", arr[i] * 2);
        } else {
            printf("%d ", arr[i] / 2);
        }
    }
    printf("\n");

    return 0;
}