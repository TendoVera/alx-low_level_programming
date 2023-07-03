#include "lists.h"
/**
 * add_nodeint_end -  function that adds new node at the end of listint_t list.
 * @head: lists.
 * @n: another node.
 * Return:  the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *another, *end;
another = malloc(sizeof(listint_t));
if (another == NULL)
	return (NULL);
another->n = n;
another->next = NULL;
if (*head == NULL)
	*head = another;
else
{
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = another;
}
return (*head);
}
