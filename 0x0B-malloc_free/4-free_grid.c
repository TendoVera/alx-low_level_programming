#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid previously created by alloc_grid.
 * @grid: grid free
 * @height: height of grid
 *
 * Return: grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
