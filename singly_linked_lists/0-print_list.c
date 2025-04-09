#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - A function that prints all the elements of a list_t list.
 *
 * @h: pointer to the  head of list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)

{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
