#!/usr/bin/python3

def island_perimeter(grid):
    """function of island perimeter grid that returns the perimeter"""

    width = len(grid[0])
    lenght = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid [i][j] == 0:
                size += 1
                 if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
                    return size * 4 - edges ** 2
