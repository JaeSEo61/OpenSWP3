#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main()
{
	int choice = 0;
	printf("Utiliy Pack(유용한 도구 모음)\n");
	printf("1. 단위 변환기	2. 간단 계산기	3. 점수 평균 계산기	4. 문자열 처리 도구	5. 랜덤 비밀번호 생성기\n\n");
	
	printf("원하는 도구의 번호를 입력하세요: ");
	scanf("%d", &choice);
	printf("\n");
	switch (choice)
	{
	case 1:
		printf("1번 단위 변환기를 선택하셨습니다.\n");
		// 단위 변환기 기능 구현
		break;
	case 2:
		printf("2번 간단 계산기를 선택하셨습니다.\n");
		// 간단 계산기 기능 구현
		break;
	case 3:
		printf("3번 점수 평균 계산기를 선택하셨습니다.\n");
		// 점수 평균 계산기 기능 구현
		break;
	case 4:
		printf("4번 문자열 처리 도구를 선택하셨습니다.\n");
		// 문자열 처리 기능 구현
		break;
	case 5:
		printf("5번 랜덤 비밀번호 생성기를 선택하셨습니다.\n");
		// 랜덤 비밀번호 생성기 기능 구현
		break;
	default:
		printf("잘못된 선택입니다. 프로그램을 종료합니다.\n");
		break;
	}
}
