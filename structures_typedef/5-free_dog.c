#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs.
 *
 * @d: pointer to struct to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
