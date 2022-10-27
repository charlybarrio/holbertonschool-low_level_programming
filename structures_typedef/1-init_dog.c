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

	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
