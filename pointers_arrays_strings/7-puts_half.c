#include <stdio.h>
#include "main.h"
/**
 * puts_half - a function that print the second half of the string.
 *
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	if (!(length % 2))
		length /= 2;
	else
		length = (length + 1) / 2;

	while (*(str + length) != '\0')
	{
		_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}
