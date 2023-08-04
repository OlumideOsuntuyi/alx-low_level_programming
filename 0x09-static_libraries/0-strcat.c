#include "main.h"

/**
 * *_strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 *
 * Return: Pointer to the destination string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    /* Find the end of the destination string */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Append the source string to the destination string */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0'; // Add null terminator to the concatenated string
    return (dest);
}

