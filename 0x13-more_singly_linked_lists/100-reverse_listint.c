#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: pointer to the first node.
 *
 * Return: reversed list head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = next;
	}
	*head = tmp;
	return (*head);
}
