#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates a two dimension array of ints
 * @width: matrix width
 * @heigth: matrix height
 * Return: pointer to created matrix (success), NULL (Error)
 */
int **alloc_grid(int width, int heigth)
{
	int **array;
	int i, j;

	if (heigth <= 0 || width <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * heigth);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < heigth; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < heigth; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
