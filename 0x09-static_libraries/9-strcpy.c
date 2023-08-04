#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by 'src',
 *           including the terminating null byte, to the
 *           buffer pointed to by 'dest'.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Description: This function copies the string 'src' to 'dest',
 *              including the null-terminating byte ('\0').
 *
 * Return: The pointer to 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
    int count = 0;

    while (count >= 0)
    {
        *(dest + count) = *(src + count);
        if (*(src + count) == '\0')
            break;
        count++;
    }

    return (dest);
}

