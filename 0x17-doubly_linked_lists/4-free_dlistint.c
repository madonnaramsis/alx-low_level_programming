#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: pointer to a node.
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head->prev)
		head = head->prev;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
