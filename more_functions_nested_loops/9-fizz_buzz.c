#include "main.h"
/**
 * main - Task9
 *
 *Return: always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 99; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
