#include <stdio.h>

int main(void) {
    int arr[5];
    int i;
    int sum = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i += 2) {
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}