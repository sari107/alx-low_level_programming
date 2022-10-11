#include "dog.h"
#include "stdlib.h"

/**
 *
 *
 *
 *
 *
 *
 *
 */

int _strlen(char *str)
{
	int len = 0;
	while(*str++)
		len++;
	return (len);
}

char *_strcopy(char *dest, char *src)
{
	int index;
	for(index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if(name == NULL || age < 0 || owner ==NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));

	if(dogg == NULL)

		return (NULL);

	dogg ->name = malloc(sizeof(char) * (_strlen(name) +1));

	if(dogg ->name == NULL)
	{
	    free(dogg);
	    return (NULL);
	}

	dogg ->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if(dogg ->owner == NULL)
	{
            free(dogg -> name);
	    free(dogg);
	    return (NULL);
	}

	dogg -> name = _strcopy(dogg -> name, name);
	dogg -> age = age;
	dogg -> owner = _strcopy(dogg ->owner, owner);

	return (dogg);
}






