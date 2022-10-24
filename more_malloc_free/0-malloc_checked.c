#include "main.h"
/**
**malloc_checked - allocates memory
*@b:int
*Return: always 0
*/
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(sizeof(int) * b);
	if (c == NULL)
		exit(98);
	return(c);
}
