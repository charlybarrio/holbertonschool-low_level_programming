#include "main.h"
/**
 *free_grid - frees a 2 dimensional grid previously created
 *@grid: int
 *@height: int
 *Return: always 0
 */
void free_grid(int **grid, int height)
{
	int a;

	alloc_grid(**grid, height);
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
