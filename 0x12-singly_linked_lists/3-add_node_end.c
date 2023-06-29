#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @str:  needs to be duplicated
 * @head: lists.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start_node, *end_node;
	size_t t;
	start_node = malloc(sizeof(list_t));
	if (start_node == NULL)
		return (NULL);
	start_node->str = strdup(str);
	for (t = 0; str[t]; t++)
		;
	start_node->len = t;
	start_node->next = NULL;
	end_node = *head;
	if (end_node == NULL)
	{
		*head = start_node;
	}
	else
	{
		while (end_node->next != NULL)
			end_node =  end_node->next;
		end_node->next = start_node;
	}
	return (*head);
}
