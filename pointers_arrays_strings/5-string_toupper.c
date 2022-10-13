#include "main.h"
/**
 **string_toupper - Task5
 *@*c: char
 *Return: always 0
 */
char *string_toupper(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] >= a && c[a] <= z)
		{
			c[a] = c[a] - 32;
		}
	}
	return (c);
}

