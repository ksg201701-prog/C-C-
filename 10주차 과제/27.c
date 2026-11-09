#include <stdio.h>

int main(void) {
    int arr[100];
    int n, i;

    scanf("%d", &n);

    arr[0] = 100;
    arr[1] = n;

    i = 1;
    while (arr[i] >= 0) {
        i++;
        arr[i] = arr[i - 2] - arr[i - 1];
    }

    for (n = 0; n <= i; n++) {
        printf("%d ", arr[n]);
    }
    printf("\n");

    return 0;
}