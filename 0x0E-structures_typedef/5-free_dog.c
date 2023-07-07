#include "dog.h"

/**
 * free_dog - Frees struct
 * @d: struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d);
	free(d->owner);
}
