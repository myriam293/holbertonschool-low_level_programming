#include <stdio.h>
#include "main.h"
/**
 * void swap_int(int *a, int *b) - This function swaps the
 * values of two integers
 *
 * Description: This programme swaps the
 * values of two integers
 *
 * @a: An integer input pointer
 * @b: An integer input pointer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
