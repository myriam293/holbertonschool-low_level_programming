#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase,
 *                      followed by a new line
 * This programme uses a loop to print the alphabet 10 times while
 *              ensuring `_putchar` is used only twice
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
