#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: pointer to the first node.
 *
 * Return: node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	i = tmp->n;
	free(tmp);
	return (i);
}
