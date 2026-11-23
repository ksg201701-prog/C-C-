#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void printPerson(struct Person* p){
    printf("Name: %s, Age: %d\n", p->name, p->age);
}

void updateAge(struct Person* p){
    strcpy(p->name, "Yun");
    p->age = 22;
}

int main(){
    struct Person p1 ={"Moon", 25};

    printPerson(&p1);
    updateAge(&p1);
    printPerson(&p1);

    return 0;
}