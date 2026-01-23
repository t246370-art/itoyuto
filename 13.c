#include <stdio.h>
#include <math.h>

void hanteikeisan(int a, int b, int c) {
    int D;
    double x1, x2;

    D = b * b - 4 * a * c;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2.0 * a);
        x2 = (-b - sqrt(D)) / (2.0 * a);
        printf("異なる2つの実数解\n");
        printf("x1 = %.2f, x2 = %.2f\n", x1, x2);

    } else if (D == 0) {
        x1 = -b / (2.0 * a);
        printf("重解\n");
        printf("x = %.2f\n", x1);

    } else {
        printf("実数解なし\n");
    }
}

int main(void) {
    int a, b, c;

    do {
        printf("整数 a を入力してね（a ≠ 0）：");
        scanf("%d", &a);
    } while (a == 0);

    printf("整数 b を入力してね：");
    scanf("%d", &b);

    printf("整数 c を入力してね：");
    scanf("%d", &c);

    hanteikeisan(a, b, c);

    return 0;
}
