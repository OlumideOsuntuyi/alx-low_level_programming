#include "main.h"

/**
 * last_index - Returns the last index of a string (including the null character).
 * @s: Pointer to the string.
 *
 * Return: The last index of the string (counting the null character).
 */
int last_index(char *s)
{
	int n = 0;

	if (*s != '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int end = last_index(s) - 1; // Subtract 1 to account for the null character

	return (check_palindrome(s, 0, end, end % 2));
}

/**
 * check_palindrome - Recursive function to check if the string is a palindrome.
 * @s: The string to check.
 * @start: The starting index from left to right.
 * @end: The ending index from right to left.
 * @pair: Indicates whether the length of the string is even or odd.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check_palindrome(s, start + 1, end - 1, pair));
}

