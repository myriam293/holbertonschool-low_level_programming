#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - A function that returns the number
 * of elements in a linked dlistint_t list.
 *
 * @h: head of doubly linked list
 *
 * Return: number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
