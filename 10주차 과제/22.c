#include <stdio.h>

int main(void) {
    int cnt[11] = {0};
    int x, i;

    while (1) {
        scanf("%d", &x);
        if (x < 1 || x > 10) {
            break;
        }
        cnt[x]++;
    }

    for (i = 1; i <= 10; i++) {
        if (cnt[i] > 0) {
            printf("%d : %d\n", i, cnt[i]);
        }
    }

    return 0;
}