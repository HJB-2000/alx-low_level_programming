#!/usr/bin/python3
"""Module to calculate the perimeter of an island in a grid."""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a given grid.

    The grid is a list of lists where 0 represents water and 1 represents land.

    Args:
        grid (list): A list of lists of integers representing the island.

    Returns:
        int: The perimeter of the island defined in the grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    i = 0
    while i < height:
        j = 0
        while j < width:
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1
            j += 1
        i += 1

    return size * 4 - edges * 2