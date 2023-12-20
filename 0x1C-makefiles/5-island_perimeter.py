#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def count_water_neighbors(grid, row, col):
    """Returns the number of water neighbors for a cell in a grid."""
    water_neighbors = 0

    if row == 0 or not grid[row - 1][col]:
        water_neighbors += 1
    if col == 0 or not grid[row][col - 1]:
        water_neighbors += 1
    if col == len(grid[row]) - 1 or not grid[row][col + 1]:
        water_neighbors += 1
    if row == len(grid) - 1 or not grid[row + 1][col]:
        water_neighbors += 1

    return water_neighbors


def island_perimeter(grid):
    """Returns the perimeter of the island in the given grid."""
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col]:
                perimeter += count_water_neighbors(grid, row, col)

    return perimeter
