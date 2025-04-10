#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - A function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 *
 * @head:The pointer to head of list to look through
 *
 * Return: The sum of all elements in the list, or 0 if list is NULL
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
