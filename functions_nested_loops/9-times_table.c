#include "main.h"
/**
 * times_table - Task9
 *
 * Return: always 0
 */
void times_table(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar (n * m + '0');
			_putchar (',');
			_putchar (' ');
		}
	_putchar ('\n');
	}
}
