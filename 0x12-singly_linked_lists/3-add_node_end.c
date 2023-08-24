#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: the first node pointer.
 * @str: the string to fill.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *next;
	unsigned int len;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	len = 0;
	while (str[len])
	{
		len++;
	}
	ptr->len = len;
	ptr->str = strdup(str);
	if (*head == NULL)
		*head = ptr;
	else
	{
		next = *head;
		while (next->next != NULL)
		{
			next = next->next;
		}
		next->next = ptr;
	}
	return (*head);
}
