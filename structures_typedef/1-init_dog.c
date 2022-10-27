#include "main.h"
#include "dog.h"
/**
 *init_dog - Write a function that initialize a variable of type struct dog
 *@d:struct
 *@name:char
 *@age:age
 *@owner:char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dog;

	d = malloc(sizeof(struct dog));
	if (d = NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (dog);
}
