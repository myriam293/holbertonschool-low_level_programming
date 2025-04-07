#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 *
 * Return: pointer to a 2D array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array, a = 0, b = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; a < height; a++)
	{
		array[a] = (int *)malloc(sizeof(int) * width);
		if (array[a] == NULL)
			free(array[a]);
		free(array);
		return (NULL);
	}

	for (a = 0; a < height; a++)
		for (; b < width; b++)
			array[a][b] = 0;
	return (array);
}
