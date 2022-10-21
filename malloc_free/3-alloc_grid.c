#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * 
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int *w;
	w = (int *)malloc(width * height * sizeof(int));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (w == NULL)
		return (NULL);
	else
		return (0);
}
