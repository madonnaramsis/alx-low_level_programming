#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: the first node pointer.
 *
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 1;
	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
