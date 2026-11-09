#include <stdio.h>

int main(void) {
    int score[10];
    int i;
    int sum = 0;
    double avg;

    for (i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    avg = sum / 10.0;

    printf("sum = %d\n", sum);
    printf("avg = %.1f\n", avg);

    return 0;
}