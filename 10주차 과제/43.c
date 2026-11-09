#include <stdio.h>

int main(void) {
    int arr[10][10] = {0};
    int n, i, j;

    scanf("%d", &n);

    arr[0][0] = 1;

    for (i = 1; i < n; i++) {
        arr[i][0] = 1;
        for (j = 1; j <= i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            if (j > 0) printf(" ");
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}