#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
/**
 *
 *
 *
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if(d->name == 0)
		printf("name:(nil)\n");
	else
		printf("name:%s\n", d->name);
	printf("age:%f\n", d->age);

	if(d->owner == 0)
		printf("owner:(nil)\n");
	else
		printf("owner:%s\n", d->owner);
}
