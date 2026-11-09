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

    for (i = 1; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}