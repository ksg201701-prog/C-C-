#include <stdio.h>

struct Person
{
    char name[21];
    int age;
};

int main(void)
{
    struct Person me = {"Yejun", 12};
    struct Person friend;

    scanf("%20s %d", friend.name, &friend.age);

    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d\n", friend.name, friend.age);

    return 0;
}