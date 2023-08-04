#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring 'needle'
 *           in the string 'haystack'.
 * @haystack: Pointer to the entire string.
 * @needle: Pointer to the substring.
 *
 * Description: This function searches the string 'haystack' for the
 * first occurrence of the substring 'needle'.
 *
 * Return: Pointer to the beginning of the located substring in 'haystack',
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *bhaystack;
    char *pneedle;

    while (*haystack != '\0')
    {
        bhaystack = haystack;
        pneedle = needle;

        while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
        {
            haystack++;
            pneedle++;
        }

        if (!*pneedle)
            return (bhaystack);

        haystack = bhaystack + 1;
    }

    return (NULL);
}

