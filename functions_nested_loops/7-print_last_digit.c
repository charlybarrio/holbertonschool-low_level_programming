#include "main.h"
/**
 * print_last_digit - Task7
 *@n: int
 * Return: always 0
 */
int print_last_digit(int n)
{
	int x = n % 10;
	int y = x * -1;

	if (n >= 0)
	{
		_putchar (x);
		return (x);
	}
	else
	{
		_putchar (y);
		return (x);
	}
}
