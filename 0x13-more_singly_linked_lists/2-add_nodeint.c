#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * add_nodeint - function  adds a new node at the beginning of a listint_t list.
 * @head: list printed.
 *@n: another node.
 *
 *Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *another;

another = malloc(sizeof(listint_t));
if (!another)
return (NULL);

another->n = n;
another->next = *head;
*head = another;
return (another);
}
