#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: The integer square root, or -1 if the root is not a whole number.
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root of
 * @val: The current guess for the square root.
 * Return: The integer square root, or -1 if the root is not a whole number.
 */

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);

}

