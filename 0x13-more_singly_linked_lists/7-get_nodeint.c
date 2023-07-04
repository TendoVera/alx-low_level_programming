#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list.
 * @head: first list.
 * @index: index of node starting at 0.
 * Return: if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h = 0;
	listint_t *tmp = head;
	while (tmp && h < index)
	{
		tmp = tmp->next;
	}
	return (NULL);
}
