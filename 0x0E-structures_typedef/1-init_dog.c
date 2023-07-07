#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct
 * @d: the struct to be modified
 * @name: the initialized name
 * @age: the initialized age
 * @owner: the initialized owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
