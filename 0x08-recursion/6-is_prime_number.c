#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Check if n is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Check if n is divisible by numbers from 2 to resp.
 * @n: The number to check.
 * @resp: The current divisor being tested.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_prime(int n, int resp)
{
	if (n <= 1)
		return (0);

	if (resp * resp > n)
		return (1);

	if (n % resp == 0)
		return (0);

	return (check_prime(n, resp + 1));
}

