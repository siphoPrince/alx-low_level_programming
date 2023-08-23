#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of lists representing the island grid.

    Returns:
        int: The perimeter of the island.

    Constraints:
        - Grid is rectangular, width and height don't exceed 100.
        - Grid is completely surrounded by water, and there is one island (or nothing).
        - The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Start with a square's perimeter

                # Check adjacent cells (up, down, left, right)
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 1  # Subtract 1 for each adjacent land cell
                if row < rows - 1 and grid[row + 1][col] == 1:
                    perimeter -= 1
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 1
                if col < cols - 1 and grid[row][col + 1] == 1:
                    perimeter -= 1

    return perimeter
