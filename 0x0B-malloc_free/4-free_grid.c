#include "main.h"

/**
 * free_grid - frees an array
 * @grid: memory array to be freed
 * @height: height of the array
 * Return : Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
