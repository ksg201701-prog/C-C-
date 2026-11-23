#include <stdio.h>

struct Info
{
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void)
{
    struct Info a;

    scanf("%100s %100s %100s", a.name, a.tel, a.addr);

    printf("name : %s\n", a.name);
    printf("tel : %s\n", a.tel);
    printf("addr : %s\n", a.addr);

    return 0;
}