#include "main.h"
#include <stdlib.h>

/**
*free_grid - frees the 2d array
*@grid: array to be freed
*@height: column length
*
*Return: nothing
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
