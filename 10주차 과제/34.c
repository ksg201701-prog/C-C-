#include <stdio.h>

int main(void) {
    int arr[5][5] = {0};
    int i, j;

    arr[0][0] = 1;

    for (i = 1; i < 5; i++) {
        arr[i][0] = 1;
        for (j = 1; j <= i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            if (j > 0) printf(" ");
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}