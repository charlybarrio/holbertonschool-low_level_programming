#include "main.h"
/**
 *_print_rev_recursion - Task0
 *@s: char
 *Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar ('\n');
}
