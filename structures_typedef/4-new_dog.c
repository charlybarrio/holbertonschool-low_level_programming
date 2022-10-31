#include "dog.h"
#include <string.h>
/**
 **new_dog - creat a copy
 *@name:char
 *@age:float
 *@owner:char
 *Return:always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perrito;
	char *n2, *o2;

	perrito = malloc(sizeof(dog_t));

	if (perrito == NULL)
		return (NULL);
	n2 = _strdup(name);
	if (n2 == NULL)
	{
		free(perrito);
		return (NULL);
	}
	o2 = _strdup(owner);
	if (o2 == NULL)
	{
		free(perrito);
		return (NULL);
	}
	perrito->name = n2;
	perrito->age = age;
	perrito->owner = o2;
return (perrito);
}
/**
 *_strdup - Task1
 *@str: char
 *Return: always 0
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int a;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * strlen(str) + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; a <= strlen(str); a++)
		s[a] = str[a];
	return (s);
}
