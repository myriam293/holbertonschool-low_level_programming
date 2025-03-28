#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all letters of the alphabet in lowercase
 *			excepting q and e followed by a new line.
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if ((letter != 'q') & (letter != 'e'))
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
