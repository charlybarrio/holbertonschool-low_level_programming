#include "function_pointers.h"
/**
 *array_iterator - function given as a parameter on each element
 *@array:int
 *@action:int
 *@size:size
 *Return:always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
