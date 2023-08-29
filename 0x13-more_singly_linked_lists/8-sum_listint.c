#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: pointer to the first node.
 *
 * Return: the nth node of a listint_t linked list OR (NULL) if not exist.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (0);
	tmp = head;
	i = 0;
	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
