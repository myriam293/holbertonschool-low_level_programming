#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * factorial - A function that returns the
 * factorial of a number.
 *
 * @n: An input integer
 *
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
