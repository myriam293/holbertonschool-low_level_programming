#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog.
 *
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: struct to initialize
 *
 * Return Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
