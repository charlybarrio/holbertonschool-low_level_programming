#include "lists.h"
/**
 *free_list - function that frees a list
 *@head: list
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
