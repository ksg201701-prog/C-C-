#include <stdio.h>

int main(void) {
    int arr[4][2];
    int rowSum[4] = {0};
    int colSum[2] = {0};
    int total = 0;
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
            total += arr[i][j];
        }
    }

    for (i = 0; i < 4; i++) {
        if (i > 0) printf(" ");
        printf("%d", rowSum[i] / 2);
    }
    printf("\n");

    for (j = 0; j < 2; j++) {
        if (j > 0) printf(" ");
        printf("%d", colSum[j] / 4);
    }
    printf("\n");

    printf("%d\n", total / 8);

    return 0;
}