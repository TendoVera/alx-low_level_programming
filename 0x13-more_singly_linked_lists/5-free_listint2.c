#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: lists to be printed.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
listint_t *freed;
if (head == NULL)
	return;
while (*head)
{
	freed = (*head)->next;
	free(*head);
	*head = freed;
}
head = NULL;
}
