#include <stdio.h>

int main() {
    int size;
    int stars, blank1, blank2;
    int i, j;

    scanf("%d", &size);

    int width = 2 * size - 1;

    // 1. 위쪽 V 모양
    for (i = 0; i < size; i++) {
        for (j = 0; j < i; j++)
            printf(" ");

        if (i == size - 1) {
            printf("**");
        } else {
            printf("*");

            blank1 = width - 2 - (2 * i);
            for (j = 0; j < blank1; j++)
                printf(" ");

            printf("*");
        }

        printf("\n");
    }

    // 2. 컵 몸통
    for (i = 0; i < size; i++) {
        for (j = 0; j < width; j++)
            printf("*");
        printf("\n");
    }

    // 3. 받침대 위로 좁아지는 부분
    for (stars = width - 2; stars >= 2; stars -= 2) {
        blank1 = (width - stars) / 2;

        for (j = 0; j < blank1; j++)
            printf(" ");

        for (j = 0; j < stars; j++)
            printf("*");

        printf("\n");
    }

    // 4. 맨 아래 받침대
    for (j = 0; j < width; j++)
        printf("*");

    printf("\n");

    return 0;
}