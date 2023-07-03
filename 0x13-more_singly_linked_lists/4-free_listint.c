#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: lists to be freed.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
listsint_t *freed;
while (head)
{
	freed = head->next;
	free(head);
	head = freed;
}
}
