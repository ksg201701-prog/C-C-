#include <stdio.h>

struct Student
{
    char name[21];
    int score;
};

int main(void)
{
    struct Student s[5];
    int maxIdx = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%20s %d", s[i].name, &s[i].score);

        if (s[i].score > s[maxIdx].score)
            maxIdx = i;
    }

    printf("%s %d\n", s[maxIdx].name, s[maxIdx].score);

    return 0;
}