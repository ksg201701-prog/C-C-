//2번. 출력되는 hp 값은?
struct Hero { char name[10]; int hp; };

void hit(struct Hero h) { h.hp -= 30; }

int main() {
    struct Hero knight = {"Arthur", 100};
    hit(knight);
    printf("%d", knight.hp);
    return 0;
}
//1. 70 2. 100 3. 30 4. 컴파일 오류 답 : [2]