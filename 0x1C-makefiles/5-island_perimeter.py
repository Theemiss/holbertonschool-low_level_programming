#!/usr/bin/python3
"""
    Technical interview preparation:
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid:

    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one
    island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
    """
    c = 0
    for x in range(0, len(grid), 1):
        for j in range(0, len(grid[0]), 1):
            if grid[x][j] == 1:
                c = c + 4
                if j - 1 >= 0 and grid[x][j - 1] == 1:
                    c -= 2
                if x - 1 >= 0 and grid[x - 1][j] == 1:
                    c -= 2
    return (c)
