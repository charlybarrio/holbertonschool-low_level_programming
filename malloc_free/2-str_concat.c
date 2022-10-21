#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *s3, *s4, *s5;
	unsigned int a, b;

	if (s1 == NULL)
	{
		return ("");
	}
	else if (s2 == NULL)
	{
		return ("");
	}
	s3 = malloc(sizeof(char) * strlen(s1));
	s4 = malloc(sizeof(char) * strlen(s2));
	for (a = 0; a <= strlen(s1); a++)
	{
	s3[a] = s1[a];
	}
	for (b = 0; b <= strlen(s2); b++)
	{
	s4[b] = s2[b];
	}
	s5 = malloc(sizeof(char) * strlen(s1) - 4);
	s5 = strcat(s3, s4);
	return (s5);
}
