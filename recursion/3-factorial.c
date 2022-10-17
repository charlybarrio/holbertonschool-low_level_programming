#include "main.h"
/**
 * factorial - task3
 * @n: int
 * Return: always 0
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
