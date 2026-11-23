#include <stdio.h>
#include <string.h>

struct Person
{
    char name[21];
    int height;
    double weight;
};

int main(void)
{
    struct Person p[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%20s %d %lf", p[i].name, &p[i].height, &p[i].weight);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (strcmp(p[j].name, p[j + 1].name) > 0)
            {
                struct Person temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %.1f\n", p[i].name, p[i].height, p[i].weight);
    }

    return 0;
}