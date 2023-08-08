#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate arguments into a single string with newlines
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to the concatenated string (Success), or NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;
	int i, j, k = 0;

	// Calculate the total length of the concatenated string
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; // Account for the newline character
	}

	// Allocate memory for the concatenated string
	char *str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	// Copy each argument with a newline character
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0'; // Null-terminate the concatenated string
	return (str);
}

