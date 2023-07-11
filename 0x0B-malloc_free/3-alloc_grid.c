#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width parameter
 * @height: height parameter
 * Return: pointer (success)
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(sizeof(int *) * height);

	if (pointer == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		pointer[x] = malloc(sizeof(int) * width);

		if (pointer[x] == NULL)
		{
			for (; x >= 0; x--)
				free(pointer[x]);

			free(pointer);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			pointer[x][y] = 0;
	}

	return (pointer);
}
