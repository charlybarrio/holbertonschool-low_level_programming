#include "dog.h"
/**
 *free_dog - frees dogs
 *@d:dog_t
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
