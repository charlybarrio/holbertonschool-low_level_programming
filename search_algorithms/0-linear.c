#include "search_algos.h"
/**
 * linear_search - Linear algorithm
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: the valude to search
 * Return: the indez of the value, -1 if fail
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int a = 0;

	if (array == NULL)
		return (-1);
	for (a = 0; a <= size - 1; a++)
	{
		if (value == array[a])
		{
			printf("Value checked array[%d] = [%d]\n", a, array[a]);
			return (a);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", a, array[a]);
		}
	}
	return (-1);
}
