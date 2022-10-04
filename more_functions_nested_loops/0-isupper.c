#include "main.h"
/**
 * _isupper - Task0
 *@c: int
 * Return: always 0
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
