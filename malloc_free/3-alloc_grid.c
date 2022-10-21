#include "main.h"
/**
 ***alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: int
 *@height: int
 *Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **wh;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	wh = malloc(sizeof(int) * height);
	if (wh == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		wh[h] = malloc(sizeof(int) * width);
		if (wh[h] == NULL)
		{
			for (; h >= 0; h--)
				free(wh[h]);
			free(wh);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			wh[h][w] = 0;
	}
	return (wh);
}
