#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: the first node pointer.
 * @str: the string to fill.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL || !head)
	{
		free(ptr);
		return (NULL);
	}
	if (*head == NULL)
		ptr->next = NULL;
	else
		ptr->next = *head;
	len = 0;
	while (str[len])
	{
		len++;
	}
	ptr->len = len;
	ptr->str = strdup(str);
	*head = ptr;
	return (*head);
}
