#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the first node.
 * @idx: the index of the new node.
 * @n: the n value of the new node.
 *
 * Return: the new node of a listint_t linked list OR (NULL) if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int i;

	tmp = *head;
	if (idx != 0)
		idx--;
	i = 0;
	while (tmp && (i < idx))
	{
		tmp = tmp->next;
		i++;
	}
	if (idx == i)
	{
		new = malloc(sizeof(listint_t *));
		if (!new)
			return (NULL);
		new->n = n;
		if (i != 0)
			new->next = tmp->next, tmp->next = new;
		else
			*head = new, new->next = NULL;
		return (new);
	}
	return (NULL);
}
