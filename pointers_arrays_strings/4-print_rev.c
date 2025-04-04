#include <stdio.h>
#include "main.h"
/**
 * print_rev - This function prints a string,
 * in reverse, followed by a new line
 * @s: An input string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	while (length)
		_putchar(s[--length]);

	_putchar('\n');
}
