#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to the first node.
 * @n: the value to assign.
 *
 * Return: the address of the new node OR NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	tmp = malloc(sizeof(listint_t *));
	ptr = malloc(sizeof(listint_t *));
	if (!tmp || !ptr)
	{
		free(tmp);
		free(ptr);
		return (NULL);
	}
	tmp = *head;
	if (*head == NULL)
		*head = ptr;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ptr;
	}
	ptr->n = n;
	ptr->next = NULL;
	return (*head);
}
