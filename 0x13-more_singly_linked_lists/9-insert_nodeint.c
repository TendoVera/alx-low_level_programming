#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node at given 
 * position.
 * @head: linked list
 * @idx:  index of the list where the new node should be added.
 * @n: new node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int h;
listint_t *node;
listint_t *index = *head;
new = malloc(sizeof(listint_t));
if(!node || !head)
	return (NULL);
node->n = n;
node->next = NULL;
if (idx == 0)
{
	node->next - *head;
	*head = node;
	return (node);
}
for (h = 0; index && h < idx; h++)
{
	if (h == idx - 1)
	{
		node->next = index->next;
		index->next = node;
		return (node);
	}
	}
return (NULL);
}
