#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a;
	int b = 0;

	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}
	s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (a = 0; a <= strlen(s1); a++)
	{
		s3[a] = s1[a];
		b++;
	}
	for (a = 0; a <= strlen(s2); a++)
		s3[b++] = s2[a];
	return (s3);
}	
