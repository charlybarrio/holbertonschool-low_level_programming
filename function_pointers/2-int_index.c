#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array:int
 *@size:int
 *@cmp:int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0)
		return;
	if (cmp == 0)
		return;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
