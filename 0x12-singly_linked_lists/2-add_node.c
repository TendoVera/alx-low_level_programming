#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @str: needs to be duplicated
 * @head: lists.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ment;
	int size = 0;
	ment = malloc(sizeof(list_t));
	if (ment == NULL)
		return (NULL);
	while (str[size])
		sie++;
	ment->len = size;
	ment->str = strdup(str);
	ment->next = *head;
	*head = ment;
	return (ment);
}
