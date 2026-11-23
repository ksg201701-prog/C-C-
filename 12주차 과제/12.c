#include <stdio.h>
#include <string.h>

struct Score {
    char name[20];
    int kor;
    int eng;
};

struct Score plus(struct Score a, struct Score b){
    struct Score result;

    strcpy(result.name, "Total");
    result.kor = a.kor + b.kor;
    result.eng = a.eng + b.eng;

    return result;
}

