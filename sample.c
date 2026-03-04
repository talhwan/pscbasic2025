#include <stdio.h>
// gcc -o main a.c
// ./main
int main()
{
    char name[20];
    char title[][20] = {"국어", "영어", "수학"};
    int score[3] = {0,}, sum = 0, i;
    double avg;

    printf("학생 이름 입력 : ");
    scanf("%s", name);

    for (i = 0; i < 3; i++)
    {
        printf("%s 점수 입력 : ", title[i]);
        scanf("%d", &score[i]);
        sum += score[i];
    }

    avg = sum / 3.0;

    printf("%s 학생의 합계는 %d 이고\n", name, sum);
    printf("평균은 %.2f입니다.\n", avg);

    return 0;
}