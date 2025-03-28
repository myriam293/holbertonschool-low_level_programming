#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all single digit
 * numbers of base 10 from 0 followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}

	printf("\n");

	return (0);
}
