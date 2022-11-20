#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node in a given position.
 * @head: A pointer to the address of the list´s head.
 * @idx: The index of the list where the node should be added
 * @n: The integer for the new node to contain. *
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cp = *head, *new;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = cp;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);

		cp = cp->next;
	}
	new->next = cp->next;
	cp->next = new;
	return (new);
}
