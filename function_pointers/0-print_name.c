#include "function_pointers.h"
/**
*print_name - prints a name
*@name:char
*@f:puntero
*/
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}
