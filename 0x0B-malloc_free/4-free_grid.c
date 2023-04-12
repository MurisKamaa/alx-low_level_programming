#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees a 2D grid previously created
 *@grid: Points to the previously allocated grid
 *@height: Number of rows of created grid
 *Return: No return
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return (NULL);
	for (i == 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
