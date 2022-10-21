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
	int *w, *h;

	w = malloc(sizeof(int) * width);
	h = malloc(sizeof(int) * height);

	if (w == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	if (w == 0 || h == 0)
		return (NULL);
	else
		return (0);
}	
