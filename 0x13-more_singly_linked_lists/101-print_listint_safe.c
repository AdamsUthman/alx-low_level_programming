#include "lists.h"

/**
 * free_listp - frees a linkedlist
 * @head: head of a list
 *
 * Return: no return
 */

void free_listp(istp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = cur) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 *
 * Return: number of nodes in thelist
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	htpr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = htpr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&htpr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&htpr);
	return (nnodes);
}
