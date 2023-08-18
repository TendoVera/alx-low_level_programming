#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: list
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int coun_list = 0;

	while (h != NULL)
	{
		printf("%d\n", h->);
		h = h->next;
		coun_list++;
	}

	return (coun_list);
}
