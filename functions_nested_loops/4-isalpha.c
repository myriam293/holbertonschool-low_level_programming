#include "main.h"
/**
 * _isalpha - This programme checks if a character is an alphabetic letter
 * @c: An input character
 *
 * Return: 1 if c is a letter (uppercase or lowercase), 0 otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
