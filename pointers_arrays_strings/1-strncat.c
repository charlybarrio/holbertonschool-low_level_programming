#include "main.h"
/**
 *_strncat - Task1
 *@dest: char
 *@src: char
 *@n: int
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	if ((dest == NULL) && (src == NULL))
	{
		return (NULL);
	}
	else
	{
		for (a = 0; dest[a] != '\0'; a++)
		{
		}
		for (b = 0; b < n && src[b] != '\0'; b++, a++)
		{
			dest[a] = src[b];
		}
		{
			dest[a] = '\0';
		}
		return (dest);
	}
}
