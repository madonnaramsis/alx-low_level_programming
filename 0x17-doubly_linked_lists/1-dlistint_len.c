#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *
 * @h: pointer to a node.
 *
 * Return: Number of Nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);

	while (h->prev)
		h = h->prev;

	while (h)
		counter++, h = h->next;

	return (counter);
}
