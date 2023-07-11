#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: parameter
 * @height: height parameter
 * Return: void (success)
 */

void free_grid(int **grid, int height)
{
	int arguments;

	for (arguments = 0; arguments < height; arguments++)
	{
		free(grid[arguments]);
	}

	free(grid);
}
