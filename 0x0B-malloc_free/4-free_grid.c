#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: integer array
 * @height: integer
 *
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
