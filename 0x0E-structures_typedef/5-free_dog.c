#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
