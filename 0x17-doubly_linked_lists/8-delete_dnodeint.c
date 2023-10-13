#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index,
 * of a dlistint_t linked list.
 *
 * @head: pointer to a node.
 * @index: the index of the node, starting from 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int i;

	temp = *head;
	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;

	i = 0;
	while (temp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp2->next = temp->next;
				if (temp->next != NULL)
					temp->next->prev = temp2;
			}
			free(temp);
			return (1);
		}
		temp2 = temp;
		temp = temp->next;
		i++;
	}

	return (-1);
}
