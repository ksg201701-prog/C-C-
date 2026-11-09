#include <stdio.h>

int main(void) {
    int fib[20];
    int i;

    fib[0] = 1;
    fib[1] = 1;

    for (i = 2; i < 20; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (i = 0; i < 20; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}