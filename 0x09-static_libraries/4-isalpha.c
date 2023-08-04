#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to be checked (type int).
 *
 * Description: This function determines if the given character 'c'
 * is an alphabet character, either lowercase (a-z) or uppercase (A-Z).
 *
 * Return: 1 if 'c' is an alphabet character, 0 otherwise.
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

