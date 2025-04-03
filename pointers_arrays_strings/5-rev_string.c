#include <stdio.h>
#include "main.h"
/**
 * rev_string - This function reverses a string
 *
 * @s: An input string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0, a = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	while (a < len--)
	{
		temp = s[a];
		s[a++] = s[len];
		s[len] = temp;
	}
}
