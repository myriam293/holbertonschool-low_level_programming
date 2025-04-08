#ifndef INV_TREE_H
#define INV_TREE_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - defines dog's name, age and owner.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: This programme defines dog's name, age and owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
