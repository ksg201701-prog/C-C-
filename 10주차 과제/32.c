#include <stdio.h>

int main(void) {
    int arr[4][4] = {0};
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            arr[i][3] += arr[i][j];
            arr[3][j] += arr[i][j];
            arr[3][3] += arr[i][j];
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (j > 0) printf(" ");
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}