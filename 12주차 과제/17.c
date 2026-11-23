#include <stdio.h>

struct Student {
    char name[20];
    int score[3];
    int total;
};

void input(struct Student arr[], int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", arr[i].name, &arr[i].score[0], &arr[i].score[1], &arr[i].score[2]);
        arr[i].total = arr[i].score[0] + arr[i].score[1] + arr[i].score[2];
    }
}

void sort(struct Student arr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j].total < arr[j + 1].total)
            {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void output(struct Student arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d %d %d\n", arr[i].name,
               arr[i].score[0], arr[i].score[1], arr[i].score[2], arr[i].total);
    }
}