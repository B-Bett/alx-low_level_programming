#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the memory allocated for grid
 * @grid: grid to free
 * @heigth: heigth of grid
 */
void free_grid(int **grid, int heigth)
{
	int i;

	if (grid == NULL || heigth == 0)
		return;
	for (i = 0; i < heigth; i++)
		free(grid[i]);
	free(grid);
}
