#include "lists.h"

/**
 * free_listptr - frees linked listp list.
 *
 * @head: pointer to the first node.
 *
 * Return: Nothing.
 */
void free_listptr(listp_t **head)
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
 * free_listint_safe - frees a listint_t list.
 *
 * @h: pointer to the first node.
 *
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL;
	listp_t *new, *add;
	listint_t *curr;

	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
		{
			free_listptr(&hptr);
			exit(98);
		}

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listptr(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listptr(&hptr);
	return (nnodes);
}
