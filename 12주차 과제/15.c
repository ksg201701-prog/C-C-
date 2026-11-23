#include <stdio.h>

struct Rect
{
    int x1, y1;
    int x2, y2;
};

int main(void)
{
    struct Rect a, b, r;

    scanf("%d %d %d %d", &a.x1, &a.y1, &a.x2, &a.y2);
    scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2);

    r.x1 = (a.x1 < b.x1) ? a.x1 : b.x1;
    r.y1 = (a.y1 < b.y1) ? a.y1 : b.y1;
    r.x2 = (a.x2 > b.x2) ? a.x2 : b.x2;
    r.y2 = (a.y2 > b.y2) ? a.y2 : b.y2;

    printf("%d %d %d %d\n", r.x1, r.y1, r.x2, r.y2);

    return 0;
}