#include "search_algos.h"

/**
 *binary_search - binary algorithm
 *@array: pointer to the first element
 *@size: number of elements
 *@value: the value to search
 *@Return: the index where is value,-1 if it fails
 */
int binary_search(int *array, size_t size, int value)
{
	int max = size - 1, min = 0;
	int half = (min + max) / 2;
	int a;

	if (array == NULL)
		return (-1);

	if (min <= max)
	{
		printf("Searching in array: ");
		for (a = min; a <= max; a++)
		{
			if (a != min)
				printf(", ");
			printf("%d", array[a]);
		}
		printf("\n");
		if (value == array[half])
		{
			return (half);
		}
		else
		{
			if (value >= array[half])
				min = half + 1;
			else
				max = half -1;
		}
	}
	return (-1);
}
