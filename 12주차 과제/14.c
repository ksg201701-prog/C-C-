#include <stdio.h>
#include <string.h>

struct Info
{
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void)
{
    struct Info a[3];
    int minIdx = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%100s %100s %100s", a[i].name, a[i].tel, a[i].addr);

        if (strcmp(a[i].name, a[minIdx].name) < 0)
            minIdx = i;
    }

    printf("name : %s\n", a[minIdx].name);
    printf("tel : %s\n", a[minIdx].tel);
    printf("addr : %s\n", a[minIdx].addr);

    return 0;
}