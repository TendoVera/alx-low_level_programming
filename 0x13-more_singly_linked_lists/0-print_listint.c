#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint -  function that prints all the elements of listint_t list.
 * @h: list.
 *
 *Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t node = 0;
while (h)
{
printf("%d\n", h->n);
node++;
h = h->next;
}
return (node);
}
