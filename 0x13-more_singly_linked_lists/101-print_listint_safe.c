#include "lists.h"

/**
 * free_listp - frees linked listp list.
 *
 * @head: pointer to the first node.
 *
 * Return: Nothing.
 */
void free_listp(listp_t **head)
{
	listp_t *temp, *curr;

	if (head == NULL)
		return;

	curr = *head;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: pointer to the first node.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL;
	listp_t *new, *add;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
		{
			free_listp(&hptr);
			exit(98);
		}

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
}
