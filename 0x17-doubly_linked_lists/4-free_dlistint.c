#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: lists
 * Return: head.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
