#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: lists linked.
 * Return: the head node’s data (n), or 0 if empty.
 */
int pop_listint(listint_t **head)
{
listint_t *pop;
int numb;
if (!head || !*head)
	return (0);
numb = (*head)->n;
pop = (*head)->next;
free(*head);
*head = pop;
return (numb);
}
