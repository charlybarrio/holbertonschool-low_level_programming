#include "main.h"
/**
 **cap_string - task 6
 *@c: char
 *Return: always 0
 */
char *cap_string(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] >= 'a' && c[a] <= 'z')
		{
		if (c[a - 1] == ' ' ||
		c[a - 1] == '\t' ||
		c[a - 1] == '\n' ||
		c[a - 1] == ',' ||
		c[a - 1] == ';' ||
		c[a - 1] == '.' ||
		c[a - 1] == '!' ||
		c[a - 1] == '?' ||
		c[a - 1] == '"' ||
		c[a - 1] == '(' ||
		c[a - 1] == ')' ||
		c[a - 1] == '{' ||
		c[a - 1] == '}' ||
		a == 0)

		c[a] = c[a] - 32;
		}
	}
	return (c);
}
