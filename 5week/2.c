#include <stdio.h>

int main() {
    int count[11] = {0};
    int score;

    while (scanf("%d", &score) == 1 && score != 0) {
        count[score / 10]++;
    }

    for (int i = 10; i >= 0; i--) {
        if (count[i] > 0) {
            printf("%d : %d person\n", i * 10, count[i]);
        }
    }

    return 0;
}
