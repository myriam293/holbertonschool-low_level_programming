#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _sqrt - Function that finds square root recursively
 * @x: current guess to test the square root
 * @n: the number to find the square root of
 *
 * Return: natural square root, or -1 if none
 */
int _sqrt(int x, int n); /* Function prototype for _sqrt */

/**
 * _sqrt_recursion - Function that returns the square root of n.
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

/**
 * _sqrt - Function that finds square root recursively
 * @x: current guess to test the square root
 * @n: the number to find the square root of
 *
 * Return: natural square root, or -1 if none
 */
int _sqrt(int x, int n)
{
	if ((x * x) == n)
		return (x);
	if ((x * x) > n)
		return (-1);
	return (_sqrt(x + 1, n));
}
