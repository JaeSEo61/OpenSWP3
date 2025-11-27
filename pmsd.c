#include<stdio.h>

int main()
{
	printf("정수 2개를 입력해주세요\n");
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	printf("사용할 공식을 입력하여주세요\n");
	printf("더하기: 1, 빼기:2, 곱하기: 3 나누기:4\n");
	scanf_s("%d", &c);
	if (c == 1)
	{
		printf("%d + %d = %d\n", a, b, a+b);
	}
	if (c == 2)
	{
		printf("%d - %d = %d\n", a, b, a - b);
	}
	if (c == 3)
	{
		printf("%d * %d = %d\n", a, b, a * b);
	}
	if (c == 4)
	{
		printf("%d / %d = %d\n", a, b, a / b);
	}

}