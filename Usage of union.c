#include <stdio.h>
union test {
    int x;
    int y;
};
int main() {
    union test t;
    printf("x: ");
    scanf("%d", &t.x);
    printf("After making x = %d: x = %d y = %d\n", t.x, t.x, t.y);
    printf("y: ");
    scanf("%d", &t.y);
    printf("After making y = %d: x = %d y = %d\n", t.y, t.x, t.y);
    return 0;
}
