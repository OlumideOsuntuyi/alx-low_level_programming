#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D array (Success), or NULL (Error).
 */
int **alloc_grid(int width, int height)
{
	int **s, r, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		s[r] = malloc(sizeof(int) * width);

		if (s[r] == NULL)
		{
			for (; r >= 0; r--)
			{
				free(s[r]);
			}
			free(s);
			return (NULL);
		}

		for (c = 0; c < width; c++)
		{
			s[r][c] = 0;
		}
	}

	return (s);
}

