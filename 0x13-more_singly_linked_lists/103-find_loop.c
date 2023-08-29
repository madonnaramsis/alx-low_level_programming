#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: pointer to the first node.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = head, *tmp2 = head;

	while (tmp2 != NULL && tmp2->next != NULL)
	{
		tmp = tmp->next;
		tmp2 = tmp2->next->next;
		if (tmp == tmp2)
		{
			tmp = head;
			while (tmp != tmp2)
			{
				tmp = tmp->next;
				tmp2 = tmp2->next;
			}
			return (tmp);
		}
	}
	return (NULL);
}
