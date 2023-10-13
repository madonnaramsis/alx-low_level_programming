#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to a node.
 * @idx: the index of the node, starting from 0.
 * @n: the value to assign.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	head = *h, i = 1;
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (head->next == NULL)
			{
				new_node = add_dnodeint_end(h, n);
				return (new_node);
			}

			new_node = malloc(sizeof(dlistint_t));
			if (new_node != NULL)
			{
				new_node->n = n;
				new_node->next = head->next;
				new_node->prev = head;
				head->next->prev = new_node;
				head->next = new_node;
			}
			break;
		}
		head = head->next;
		i++;
	}

	return (new_node);
}
