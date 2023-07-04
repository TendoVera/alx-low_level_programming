#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of listint_t linked list.
 * @head: linked list.
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *data = head;
while(data)
{
	sum += data->n;
	data = data->next;
}
return (sum);
}
