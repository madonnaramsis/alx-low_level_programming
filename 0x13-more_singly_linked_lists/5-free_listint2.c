#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer to the first node.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *ptr;

	if (head == NULL)
		return;
	tmp = *head;
	while (tmp)
	{
		ptr = tmp->next;
		free(tmp);
		tmp = ptr;
	}
	*head = NULL;
}
