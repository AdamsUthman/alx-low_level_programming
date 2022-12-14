#include "lists.h"

/**
 * add_node - adds a new mode at the beginning
 * of a list_t lists.
 * @head: head of the linked list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = stdrup(str);

	for (nchar = 0; str[nchar]; nchar++);

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
