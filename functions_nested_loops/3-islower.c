#include "main.h"
/**
 * _islower - This programme checks if a character is lowercase
 * @c: An input character
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char a;
	int lower = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			lower = 1;
	}

	return (lower);
}
