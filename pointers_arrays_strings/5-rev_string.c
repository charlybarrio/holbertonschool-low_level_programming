#include "main.h"
#include <string.h>
/**
 * rev_string - Task5
 * @s: char
 * Return: always 0
 */
void rev_string(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (; a >= 0; a--)
		*s = a;
}
