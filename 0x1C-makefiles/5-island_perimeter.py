#!/usr/bin/python3
"""
island perimeter module
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid.
    Args:
        grid: a list of list of integers that describe the island.
    """
    row = len(grid[0])
    island = []
    perimeter, idx = 0, 0
    for x in grid:
        island.extend(x)
    for cell in island:
        if cell == 1:
            perimeter += 4
            if island[idx - 1] and island[idx - 1] == 1:
                perimeter -= 2
            if island[idx - row] and island[idx - row] == 1:
                perimeter -= 2
        idx += 1
    return perimeter


if __name__ == "__main__":
    pass
