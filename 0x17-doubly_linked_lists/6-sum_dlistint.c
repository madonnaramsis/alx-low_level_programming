#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n),
 * of a dlistint_t linked list.
 *
 * @head: pointer to a node.
 *
 * Return: the sum of all the data (n), of a dlistint_t linked list
 * OR
 * 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head->prev)
		head = head->prev;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
