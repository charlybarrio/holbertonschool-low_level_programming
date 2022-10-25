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
	unsigned int a;
	int size;
	int size1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = strlen(s1) + n;
	s3 = malloc(sizeof(char) * size);
	if (n > strlen(s2))
		n = strlen(s2);
	if (s3 == NULL)
		return (NULL);
	for (a = 0; a <= strlen(s1); a++)
	{
		s3[a] = s1[a];
		size1++;
	}
	if (n != 0)
	{
		for (a = 0; a <= n; a++)
			s3[size1++] = s2[a];
	}
	else
	{
		for (a = 0; a <= n; a++)
		s2 = "";
		s3[size1++] = s2[a];
	}
	return (s3);	
}
