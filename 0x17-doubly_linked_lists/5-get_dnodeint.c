#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @index: is the index of the node, starting from 0
 * @head: list
 * Return: NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *now = head;

	while (now != NULL && index > 0)
	{
		now = now->next;
		index--;
	}

	if (index > 0)
	{
		return (NULL);
	}

	return (now);
}
