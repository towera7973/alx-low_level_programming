/*
 * File: 9-insert_nodeint.c
 * Auth: Towera Mndoli
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails return  NULL.
 *         Otherwise - the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newcontainer, *storesheadpointer = *head;
	unsigned int node;

	newcontainer = malloc(sizeof(listint_t));
	if (newcontainer == NULL)
		return (NULL);

	newcontainer->n = n;

	if (idx == 0)
	{
		newcontainer->next = storesheadpointer;
		*head = newcontainer;
		return (newcontainer);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (storesheadpointer == NULL || storesheadpointer->next == NULL)
			return (NULL);

		storesheadpointer = storesheadpointer->next;
	}

	newcontainer->next = storesheadpointer->next;
	storesheadpointer->next = newcontainer;

	return (newcontainer);
}
