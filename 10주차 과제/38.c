#include <stdio.h>

int main(void) {
    int arr[10];
    int i;

    scanf("%d %d", &arr[0], &arr[1]);

    for (i = 2; i < 10; i++) {
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
    }

    for (i = 0; i < 10; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}