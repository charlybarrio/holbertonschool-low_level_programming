#include "main.h"
/**
 *_strncpy - Task2
 *@dest: char
 *@src: char
 *@n: int
 *Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

		for (b = 0; b < n && src[b] != '\0'; b++)
		{
			dest[b] = src[b];
		}
	return (dest);
}
