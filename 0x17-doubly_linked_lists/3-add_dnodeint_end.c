#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to a node.
 * @n: The value to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node, new_node->prev = NULL;
	else
	{
		curr_node = *head;
		while (curr_node->next)
			curr_node = curr_node->next;
		curr_node->next = new_node;
		new_node->prev = curr_node;
	}

	return (new_node);
}
