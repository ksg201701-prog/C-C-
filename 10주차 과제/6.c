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

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}