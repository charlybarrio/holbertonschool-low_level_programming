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
	int *wh;
	int w, h;
	wh = malloc(sizeof(int) * (width * height));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (wh != NULL)
	{
		for (w = 0; w <= width + 1; w++)
			wh[w] = 0;
		for (h = 0; h <= height + 1; h++)
			wh[h] = 0;
		{
		if (wh == NULL)
                return (NULL);
		}
	}
	return (0);
}
