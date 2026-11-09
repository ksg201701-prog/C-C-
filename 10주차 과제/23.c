#include <stdio.h>

int main(void) {
    int cnt[26] = {0};
    char c;
    int i;

    while (1) {
        scanf(" %c", &c);
        if (c < 'A' || c > 'Z') {
            break;
        }
        cnt[c - 'A']++;
    }

    for (i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            printf("%c : %d\n", 'A' + i, cnt[i]);
        }
    }

    return 0;
}