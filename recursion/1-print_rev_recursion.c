#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - A function that prints a string in
 * reverse.
 *
 * @s: An input string to printing
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
