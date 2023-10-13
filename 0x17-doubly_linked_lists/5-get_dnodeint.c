#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: pointer to a node.
 * @index: the index of the node, starting from 0.
 *
 * Return: the nth node of a dlistint_t linked list OR NULL if not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev)
		head = head->prev;

	i = 0;
	while (head && i <= index)
	{
		if (i == index)
			return (head);
		head = head->next, i++;
	}

	return (NULL);
}
