#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d integer grid
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to grid or null
 */

int **alloc_grid(int width, int height)
{
	int **grid, x, y;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			while (--x >= 0)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
