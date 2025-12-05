#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_pw()
{
	srand (time(NULL));
	int password = rand();
	printf("%04d", password);

	return 0;
}
