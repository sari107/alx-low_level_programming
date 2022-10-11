#include "dog.h"
#include "stdlib.h"

/**
 * init_dog - initializa the structure
 * @name: pass from user
 * @owner: Pointer
 * @age: Age as float
 * @d: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->onwer = owner;
	}
}
