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
		_putchar ('1');
		_putchar ('+');
		_putchar ('\n');
	}

	else if (n == 0)
	{
		_putchar ('0');
		 _putchar ('0');
		 _putchar ('\n');
	}

	else
	{
		_putchar ('-');
		_putchar ('1');
		_putchar ('-');
		_putchar ('\n');
	}
	return (0);
}
