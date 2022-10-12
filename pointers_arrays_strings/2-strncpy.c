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
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		for (b = 0; b <= n; b++)
		dest[a] = src[b];

	return (0);
}	 
