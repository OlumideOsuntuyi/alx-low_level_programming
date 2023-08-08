#include "main.h"

/**
 * create_array - Creates an array of characters and initializes it with 'c'.
 * @size: Number of elements in the array.
 * @c: Character to initialize the array with.
 *
 * Return: Pointer to the created array (Success), or NULL (Error).
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/* Define values with malloc */
	buffer = (char *)malloc(size * sizeof(char));

	if (buffer == NULL) // Check if malloc failed
	{
		return (NULL);
	}

	/* Initialize the array with 'c' */
	position = 0;
	while (position < size)
	{
		buffer[position] = c;
		position++;
	}

	return (buffer);
}

