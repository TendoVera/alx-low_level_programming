#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: constant lists.
 * Return: nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil) \n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
