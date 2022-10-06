#include "main.h"
/**
 *print_triangle - Task10
 *
 * Return: always 0
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar ('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
		       	for (c = a; c < size; c++)
			{
				_putchar (' ');
			}
				for (b = 1; b <= a; b++)
				{
					_putchar ('#');
				}
			_putchar ('\n');
		}
	}
}
