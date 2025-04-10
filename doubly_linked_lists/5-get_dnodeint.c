#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - A function that returns the
 * nth node of a dlistint_t linked list.
 *
 * @head: The pointer to head of list to look through
 * @index: The index of node to find
 *
 * Return: A pointer to node if found, or NULL in otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head)
	{
		if (a++ == index)
			break;
		head = head->next;
	}
	return (head);
}
