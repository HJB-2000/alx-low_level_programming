#include "main.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * alloc_grid -3-alloc_grid.c: Create a 2D integer array
 * @width: Number of rows
 * @height: Number of columns
 *
 * Returns: Pointer to a 2D array or NULL on failure
 */




int **alloc_grid(int width, int height)
{
	int **grid;


	int x;
	int y;
	int z;
	int *i;


	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height ; x++)
	{
		*(grid + x) = (int *)malloc(width * sizeof(int));
		if (*(grid + x) == NULL)
		{
			for (x = 0; x < height; x++)
			{
				i = grid[x];
				free(i);
			}
			free(grid);
			return (NULL);
		}
	}
	for (z = 0; z < height ; z++)
	{
		for (y = 0;  y < width; y++)
		{
			grid[z][y] = 0;
		}
	}
	return (grid);
}
