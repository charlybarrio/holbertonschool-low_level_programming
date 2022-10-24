#include "main.h"
/**
**malloc_checked - allocates memory
*@b:int
*Return: always 0
*/
void *malloc_checked(unsigned int b)
{
	unsigned int **a;
	unsigned int *c;
	c = malloc (sizeof(int) * b);
	a = &c;

	if (c == NULL)
		return (NULL);
	free(c);
	return (a);
}
