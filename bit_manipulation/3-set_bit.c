#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n : number to set
 * @index : number of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int aux = 1;

	if (index < 64)
	{
		aux <<= index;
		(*n) = (*n) | aux;
		return (1);
	}

	return (-1);
}
