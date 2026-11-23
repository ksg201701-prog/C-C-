#include <stdio.h>

struct Person
{
    char name[21];
    int height;
};

int main(void)
{
    struct Person p[5];
    int minIdx = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%20s %d", p[i].name, &p[i].height);

        if (p[i].height < p[minIdx].height)
            minIdx = i;
    }

    printf("%s %d\n", p[minIdx].name, p[minIdx].height);

    return 0;
}