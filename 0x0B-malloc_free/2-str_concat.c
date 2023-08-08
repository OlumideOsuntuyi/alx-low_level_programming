#include "main.h"

/**
 * _strlen - Length of a string
 * @s: Input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return len;
}

/**
 * str_concat - Concatenate two strings.
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the concatenated string (Success), or NULL (Error).
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	l1 = _strlen(s1);

	if (!s2)
		s2 = "";
	l2 = _strlen(s2);

	conc = malloc(l1 + l2 + 1);
	if (!conc)
		return (NULL);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;

	return (conc);
}

