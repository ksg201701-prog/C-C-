#include <stdio.h>

int main(void) {
    int arr[3][3] = {
        {3, 5, 4},
        {2, 6, 7},
        {8, 10, 1}
    };
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}