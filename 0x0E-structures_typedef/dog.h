#ifndef _DOG_
#define _DOG_

/**
 * struct dog - list dates about pet
 * @name: pet name
 * @age: pet age
 * @owner: pet owner name
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog - rename strucut with typedef
 */
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
