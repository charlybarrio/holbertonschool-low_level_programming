#include "main.h"
/**
* *string_nconcat - concatenates two string
*@s1:string1
*@s2:string2
*@n:q of char
*Return: always 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	char *s4;
	unsigned int a;
	unsigned int b;
	int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = strlen(s1) + n;
	s3 = malloc(sizeof(char) * size - 3);
	s4 = malloc(sizeof(char) * n);
	if (n > strlen(s2))
		n = strlen(s2);
	if (s3 == NULL)
		return (NULL);
	if (s3 != NULL && s4 != NULL)
	{
		for (a = 0; a <= strlen(s1); a++)
			s3[a] = s1[a];
		for (b = 0; b < n; b++)
			s4[b] = s2[b];
		s3 = strcat(s3, s4);
	}
	return (s3);
}
