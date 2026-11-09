#include <stdio.h>

int main(void) {
    double w[6];
    double sum = 0;
    int i;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &w[i]);
        sum += w[i];
    }

    printf("%.1f\n", sum / 6);

    return 0;
}