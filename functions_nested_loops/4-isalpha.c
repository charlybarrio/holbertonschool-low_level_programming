#include "main.h"
/**
 * _isalpha - Task3
 * @c: int
 * Return: always 0
 */
int _isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}
