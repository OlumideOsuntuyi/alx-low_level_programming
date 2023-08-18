#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all the arguments provided.
 * @n: The number of arguments.
 * @...: The variable arguments.
 *
 * Return: The sum of the arguments. If @n is 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list list;
    unsigned int i, sum = 0;

    va_start(list, n);

    // Loop through the arguments and accumulate the sum
    for (i = 0; i < n; i++)
    {
        unsigned int num = va_arg(list, unsigned int);
        sum += num;
    }

    va_end(list);

    return sum;
}

