#include "main.h"
/**
 * print_sign - This programme prints the sign of a number
 * @n: An input number
 *
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
