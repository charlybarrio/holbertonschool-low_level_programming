#include "main.h"
/**
 * print_sign - Task3
 * @n: int
 * Return: always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		_putchar ('1');
	}

	else if (n == 0)
	{
		_putchar ('0');
		 _putchar ('0');
	}

	else
	{
		_putchar ('-');
		_putchar ('1');
		_putchar ('-');
	}
	return (0);
}
