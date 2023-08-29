#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node at a given position.
 *
 * @head: pointer to the first node.
 * @index: the index of the node.
 *
 * Return: (1) if succeeded, (-1) if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	i = 0;
	while (tmp && (i + 1) < index)
	{
		tmp = tmp->next;
		i++;
	}
	if ((i + 1) != index && *head != NULL)
		return (-1);
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);
}
