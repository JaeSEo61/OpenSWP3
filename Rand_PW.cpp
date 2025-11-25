#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand (time(NULL));
	int password = rand();
	printf("비밀번호 생성:%04d", password);

	return 0;
}