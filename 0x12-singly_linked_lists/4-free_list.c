#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: lists.
 * Return: 0.
 */
void free_list(list_t *head)
{
	list_t *end_node;
	while ((end_node = head) != NULL)
	{
		head = head->next;
		free(end_node->str);
		free(end_node);
	}
}
