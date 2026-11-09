#include <stdio.h>

int main(void) {
    int arr[10];
    int i;
    int min;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", min);

    return 0;
}