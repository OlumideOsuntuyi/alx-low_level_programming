#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: Integer for which the absolute value is to be computed.
 *
 * Description: This function calculates the absolute value of the integer 'n'.
 *
 * Return: Absolute value of 'n'.
 */
int _abs(int n)
{
    if (n < 0)
    {
        return (n * -1);
    }
    else
    {
        return (n);
    }
}

