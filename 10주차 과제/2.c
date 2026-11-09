#include <stdio.h>

int main(void) {
    char arr[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf(" %c", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}