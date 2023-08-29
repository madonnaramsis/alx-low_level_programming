#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the first node.
 * @index: the index of the node.
 *
 * Return: the nth node of a listint_t linked list OR (NULL) if not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	tmp = head;
	i = 0;
	while (tmp && (i < index))
	{
		tmp = tmp->next;
		i++;
	}
	if (index == i)
		return (tmp);
	return (NULL);
}
