#include "lists.h"
/**
 * reverse_listint -  function that reverses a linked list
 * @head: list
 * Return: a pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
 listint_t *last = NULL;
 listint_t *new = NULL;
 while (*head)
 {
 new = (*head)->next;
 (*head)->next = last;
 last = *head;
 *head = new;
 }
 *head = last;
 return (*head);
}
