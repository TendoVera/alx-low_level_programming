#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: list
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int coun_list = 0;

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		coun_list++;
		h = h->next;
	}

	return (coun_list);
}
