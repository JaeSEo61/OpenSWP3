#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int string_program(void) {
    int menu;
    char str1[100];
    printf("메뉴를 선택하세요.\n");
    printf("1: 문자열 입력 후 출력  2: 문자열 길이 구하기  3: 대문자 변환  4: 소문자 변환\n");
    printf("번호 입력: ");
    scanf("%d", &menu);

    switch (menu) {
    case 1: {
        //단순 문자열 출력
        printf("Enter a string: ");
        scanf("%99s", str1);    
        printf("You entered: %s\n", str1);
        break;
    }

    case 2: {
        //문자열 길이 구하기
        printf("Enter a string: ");
        scanf("%99s", str1);
        printf("size: %d\n", strlen(str1));
        break;
    }
    case 3: {
        //대문자 변환
        printf("Enter a string: ");
        scanf("%99s", str1);
        strupr(str1);
        printf("Uppercase: %s\n", str1);
        break;
    }
    case 4: {
        //소문자 변환
        printf("Enter a string: ");
        scanf("%99s", str1);
        strlwr(str1);
        printf("Lowercase: %s\n", str1);
        break;
    }
    default:
        printf("잘못된 메뉴 번호입니다.\n");
        break;
    }

    return 0;
}

