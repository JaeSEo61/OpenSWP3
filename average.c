#include <stdio.h>

void calcAverage();  

/*int main() {
    int menu;

    printf("숫자를 입력하세요 (평균 계산기: 3): ");
    scanf_s("%d", &menu);

    if (menu == 3) {
        calcAverage();   
    }
    else {
        printf("없는 번호입니다.\n");
    }

    return 0;
}*/

void calcAverage() {
    int n;
    printf("몇 개의 점수를 입력할 건가요? ");
    scanf_s("%d", &n);

    int score;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        printf("%d번째 점수 입력: ", i + 1);
        scanf_s("%d", &score);
        sum += score;
    }

    double avg = (double)sum / n;
    printf("점수 평균은 %.2f 입니다.\n", avg);
}
