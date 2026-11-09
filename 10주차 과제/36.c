#include <stdio.h>

int main(void) {
    int cnt[7] = {0};
    int x, i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &x);
        cnt[x]++;
    }

    for (i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, cnt[i]);
    }

    return 0;
}