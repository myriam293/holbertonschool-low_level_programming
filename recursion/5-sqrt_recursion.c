#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _sqrt_recursion - It returns the value of square root of n.
 *
 * @n: an input integer
 *
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}
