#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the first node.
 * @n: the value to assign.
 *
 * Return: the address of the new node OR NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t *));
	if (ptr == NULL || !ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (*head == NULL || !head)
		ptr->next = NULL;
	else
		ptr->next = *head;
	ptr->n = n;
	*head = ptr;
	return (*head);
}
