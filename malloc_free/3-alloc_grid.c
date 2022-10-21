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

	wh = malloc(sizeof(int) * width);
	if (wh == NULL)
		return (NULL);
	for (w = 0; w < width; w++)
	{
		wh[w] = malloc(sizeof(int) * height);
		if (wh[w] == NULL)
		{
			for (; w >= 0; w--)
				free(wh[w]);
			free(wh);
			return (NULL);
		}
	}
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
			wh[w][h] = 0;
	}
	return (wh);
}
