#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

/* 다른 C 파일에 구현된 함수들 선언부(프로토타입) */
void conversion(void);        // conversion.c
int  pmsd(void);              // pmsd.c
void calcAverage(void);       // average.c
int  string_program(void);    // stringprogram.c
int  rand_pw(void);           // rand_pw.c

int main(void)
{
    int choice = 0;

    printf("Utility Pack(다양한 기능 모음)\n");
    printf("1. 단위 변환기\t2. 간단 계산기\t3. 점수 평균 계산기\t4. 문자열 처리\t5. 랜덤 비밀번호 생성기\n\n");

    printf("원하는 기능의 번호를 입력하세요: ");
    if (scanf("%d", &choice) != 1) {   // MSVC 쓰면 scanf_s로 바꿔도 됨
        printf("입력이 잘못되었습니다. 프로그램을 종료합니다.\n");
        return 1;
    }
    printf("\n");

    switch (choice)
    {
    case 1:
        printf("1번 단위 변환기를 선택하셨습니다.\n\n");
        conversion();            // void라 그냥 호출만
        break;

    case 2:
        printf("2번 간단 계산기를 선택하셨습니다.\n\n");
        pmsd();                  // int 반환이지만, 여기서는 굳이 안 써도 됨
        break;

    case 3:
        printf("3번 점수 평균 계산기를 선택하셨습니다.\n\n");
        calcAverage();           // void
        break;

    case 4:
        printf("4번 문자열 처리 도구를 선택하셨습니다.\n\n");
        string_program();        // int 반환값 무시
        break;

    case 5:
        printf("5번 랜덤 비밀번호 생성기를 선택하셨습니다.\n\n");
        rand_pw();               // int 반환값 무시
        break;

    default:
        printf("잘못된 번호입니다. 프로그램을 종료합니다.\n");
        break;
    }

    return 0;
}

