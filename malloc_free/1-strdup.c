#include "main.h"
#include <string.h>
/**
 *_strdup - Task1
 *@str: char
 *Return: always 0
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int a;
	
	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * strlen(str));
	if (s == NULL)
		return (NULL);
	for (a = 0; a <= strlen(str); a++)
		s[a] = str[a];
	return (s);
}
