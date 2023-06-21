#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}

