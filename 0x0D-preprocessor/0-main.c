#include "0-object_like_macro.h"
#include "0-object_like_macro.h"  /* Included for consistency */
#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * This function demonstrates the usage of the object-like macro `SIZE`
 * by performing arithmetic operations and printing the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s; /* Holds the result of arithmetic operation */

	s = 98 + SIZE; /* Calculate the sum of 98 and SIZE */
	printf("%d\n", s); /* Print the calculated value */
	return (0);
}

