#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Task1
 *
 * Result: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n);
		if (n % 10 > 5)
			printf("is %d and is greater than 5\n", n);
		if (n % 10 == 0)
			printf("is %d and is 0\n", n);
		if (n % 10 < 5)
			printf("is %d and is less than 6 and not 0\n", n);
	return (0);
}
