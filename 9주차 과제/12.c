#include <stdio.h>

int main() {
    int a;
    while(1) {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? ");
        scanf("%d", &a);
        printf("\n");

        if (a == 1) {
            printf("Seoul\n\n");
        }
        else if (a == 2) {
            printf("Washington\n\n");
        }
        else if (a == 3) {
            printf("Tokyo\n\n");
        }
        else if (a == 4) {
            printf("Beijing\n\n");
        }
        else {
            printf("none\n");
            break;
        }
    }
    return 0;
}