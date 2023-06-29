#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: constant lists.
 * Return: length.
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;
	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
