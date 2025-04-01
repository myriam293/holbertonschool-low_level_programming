#include "main.h"

/**
 * print_last_digit - This programme prints the last digit of a number
 * @a: An integer input
 *
 * Return: The last digit of a
 */
int print_last_digit(int a)
{
    int n;

    if (a < 0)
        n = -1 * (a % 10);
    else
        n = a % 10;

    _putchar((n % 10) + '0');
    return (n % 10);
}
