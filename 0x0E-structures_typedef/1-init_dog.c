
#include "dog.h"
#include "stdlib"
/**
 * init_dog - initializa the structure
 * @name: pass from user
 * @owner:
 * @age:
 * @d
 *
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
 	
}
