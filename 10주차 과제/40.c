#include <stdio.h>

int main(void) {
    int arr[4][3];
    int i, j;
    int sum, total = 0;

    for (i = 0; i < 4; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        printf("%d\n", sum);
        total += sum;
    }

    printf("%d\n", total);

    return 0;
}