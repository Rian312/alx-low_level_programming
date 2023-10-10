#include <stddef.h>
#include "dog.h"

/**
 * init-dog - intializes a struct dog
 * @d: pointer to a struct dog to intialize
 * @name: pointer to the name string
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Descrption: this function intializes the members of a struct dog
 */
void init_dog(struct dog  *d, char *name, float age, char *owner)
{
	if (d !=NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
