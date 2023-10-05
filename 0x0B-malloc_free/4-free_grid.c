#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: 2D array to free
 * @height: height dimension of the grid
 *
 * Description: Frees the memory of a 2D array.
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
