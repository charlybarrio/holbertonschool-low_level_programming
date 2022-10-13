#include "main.h"
/**
 * _strcmp - Task3
 *@s1: string1
 *@s2: string2
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0' || s2[a] == '\0')
			break;
		a++;
	}
	if (s1[a] == '\0' && s2[a] == '\0')
		return (0);
	else
		return (s1[a] - s2[a]);
}
