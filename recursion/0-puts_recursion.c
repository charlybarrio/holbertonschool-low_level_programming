#include "main.h"
/**
 *_puts_recursion - Task0
 *@s: char
 *Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	_puts_recursion(s);
	}
	else
		_putchar ('\n');
}
