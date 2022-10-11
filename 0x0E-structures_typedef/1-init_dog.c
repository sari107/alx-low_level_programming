#include "dog.h"
#include "stdlib.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog struct
 * @d: pounter to instance of a dog struct
 * @name: pointer to the first chrachter of the string of the desired name
 * @age: the desired age as a float
 * @owner: pinter to the first character of the string of the desired owner
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
