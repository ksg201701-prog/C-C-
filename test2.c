#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int answer;
    int num;
    int count = 0;

    srand(time(NULL));

    answer = rand() % 100 + 1;

    printf("1부터 100사이에 숫자를 입력하세요 : ");

    while(1)
    {
        printf("숫자입력 : ");
        scanf("%d", &num);
        count++;
        
        if(num > answer)
        {
            printf("더 작은 수입니다.\n");
        }
        else if(num < answer)
        {
            printf("더 큰 수입니다.\n");
        }
        else
        {
            printf("정답입니다.\n");
            printf("총 %d번 만에 멎췄습니다\n.", count);
            break;
        }
    }

    return 0;
}
