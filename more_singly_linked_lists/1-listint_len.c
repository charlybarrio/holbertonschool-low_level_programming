#include "lists.h"
/**
 *listint_len - number of elements in a list
 *@h:const list
 *Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
