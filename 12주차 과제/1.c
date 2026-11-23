#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p;

    scanf("%s", p.name);
    scanf("%d", &p.age);

    printf("Your name is %s and you are %d years old.\n", p.name, p.age);

    return 0;
}