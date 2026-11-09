#include <stdio.h>

int main(void) {
    int cnt[10] = {0};
    int x, i;

    while (1) {
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        cnt[x / 10]++;
    }

    for (i = 0; i < 10; i++) {
        if (cnt[i] > 0) {
            printf("%d : %d\n", i, cnt[i]);
        }
    }

    return 0;
}