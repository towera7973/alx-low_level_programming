/*
 * File: 10-delete_nodeint.c
 * Auth: Towera Mndoli
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copycontainer = *head;
	unsigned int node;

	if (copycontainer == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copycontainer);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copycontainer->next == NULL)
			return (-1);

		copycontainer = copycontainer->next;
	}

	tmp = copycontainer->next;
	copycontainer->next = tmp->next;
	free(tmp);
	return (1);
}
