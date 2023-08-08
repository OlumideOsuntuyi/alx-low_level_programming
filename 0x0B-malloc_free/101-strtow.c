#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int count = 0;
	int in_word = 0; // 1 if currently inside a word, 0 if not

	while (*s)
	{
		if (*s == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}

	return count;
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return NULL;

	int len = 0;
	while (str[len])
		len++;

	int words = count_word(str);
	if (words == 0)
		return NULL;

	char **matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return NULL;

	int i, j, k = 0;
	for (i = 0; i < len && k < words; i++)
	{
		if (str[i] != ' ')
		{
			int start = i;
			while (i < len && str[i] != ' ')
				i++;
			int end = i;

			int word_len = end - start;
			matrix[k] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (matrix[k] == NULL)
			{
				// Free previously allocated memory to avoid leaks
				for (j = 0; j < k; j++)
					free(matrix[j]);
				free(matrix);
				return NULL;
			}

			for (j = 0; j < word_len; j++)
				matrix[k][j] = str[start + j];
			matrix[k][word_len] = '\0';
			k++;
		}
	}

	matrix[k] = NULL;

	return matrix;
}

