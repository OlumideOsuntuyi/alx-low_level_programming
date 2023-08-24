#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings.
 * @separator: The string to display between two strings.
 * @n: The number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}

