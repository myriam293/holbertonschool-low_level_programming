#include "main.h"

/**
 * _abs - This programme computes the absolute value of an integer
 * @n: An integre input
 *
 * Return: Absolut value of number n.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
