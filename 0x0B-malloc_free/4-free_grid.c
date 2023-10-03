#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: numbers of rows
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int x;

	int *d;

	for (x = 0; x < height; x++)
	{
		d = grid[x];
		free(d);
	}

	free(grid);
}
