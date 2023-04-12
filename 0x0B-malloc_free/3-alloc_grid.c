#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - returns a pointer to a 2D array of ints
 *@width: Number of columns
 *@height: Number of rows
 *Return: Returns pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **res;

	if (width <= 0 || height <= 0)
		return (NULL);

	res = (int **)malloc(height * sizeof(int *));

	if (res == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		res[i] = (int *)malloc(width * sizeof(int));
		if (res[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(res[j]);
			free(res);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			res[i][j] = 0;
	}
	return (res);
}
