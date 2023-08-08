#include <stdlib.h>

/**
 * free_grid - Frees memory allocated for a 2D array.
 * @grid: Pointer to the 2D array.
 * @height: Number of rows in the array.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	int i;

	// Free memory for each row
	for (i = 0; i < height; i++)
	{
		if (*(grid + i) != NULL)
		{
			free(*(grid + i));
			*(grid + i) = NULL; // Reset the pointer to NULL after freeing
		}
	}

	free(grid); // Free the array of row pointers
}

