#include <stdio.h>

int main(void) {
    char arr[26];
    int i;

    for (i = 0; i < 26; i++) {
        arr[i] = 'A' + i;
    }

    for (i = 25; i >= 0; i--) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}