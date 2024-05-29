#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of an island represented by 1s in a grid of 0s and 1s.
    
    Args:
        grid (list of list of int): The grid representation of the map.
        
    Returns:
        int: The perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check each of the four possible neighbors
                if i == 0 or grid[i-1][j] == 0:  # Check above
                    perimeter += 1
                if i == rows-1 or grid[i+1][j] == 0:  # Check below
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:  # Check left
                    perimeter += 1
                if j == cols-1 or grid[i][j+1] == 0:  # Check right
                    perimeter += 1

    return perimeter

