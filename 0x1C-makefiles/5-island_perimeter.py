#!/usr/bin/python3
"""
5-island_perimeter.py
Author: @tonybnya
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in a grid

    Arg:
        grid (matrix): list of lists of integers
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally)
        Grid is rectangular, width and height don’t exceed 100
    """
    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
