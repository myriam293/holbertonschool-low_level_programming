#include <stdio.h>
#include "main.h"
/**
 * puts2 - a function that prints every other character of a string.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int length = 0, a = 0;

	while (str[length] != '\0')
		length++;

	length -= 1;

	for (; a <= length; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
