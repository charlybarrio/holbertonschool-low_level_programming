#include "main.h"
#include <string.h>
/**
 * print_rev
 * @s: char
 * Return: always 0
 */
void print_rev(char *s)
{
	int l, a;

	scanf("%c", s);
	l = strlen(s);
	for (a = l - 1; a >= 0; a--)
	{
		printf("%c", s[a]);
	}
	{
		_putchar ('\n');
}
