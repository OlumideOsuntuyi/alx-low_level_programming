#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Prints all strings with a separator.
 * @separator: The separator to be printed between strings.
 * @n: The number of arguments.
 * @...: The variable arguments (strings).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list list;
    unsigned int i;
    char *c;

    va_start(list, n);

    // Loop through the strings and print them
    for (i = 0; i < n; i++)
    {
        c = va_arg(list, char*);
        if (c != NULL)
            printf("%s", c);
        else
            printf("(nil)");

        if (i != n - 1 && separator != NULL)
            printf("%s", separator);
    }
    va_end(list);

    putchar('\n');
}

