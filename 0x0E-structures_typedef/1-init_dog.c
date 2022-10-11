#include "main.h"
/**
 * init_dog - initializa the structure
 * @name: pass from user
 * @owner:
 * @age:
 * @d
 *
 * return: void
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
