#include <stdio.h>

int main(void) {
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m;

    while (1) {
        scanf("%d", &m);
        if (m < 1 || m > 12) {
            break;
        }
        printf("%d\n", days[m - 1]);
    }

    return 0;
}