#include <stdio.h>

struct Person
{
    char name[21];
    int age;
};

int main(void)
{
    struct Person p[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%20s %d", p[i].name, &p[i].age);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Name : %s\n", p[i].name);
        printf("Age  : %d\n", p[i].age);
    }

    return 0;
}