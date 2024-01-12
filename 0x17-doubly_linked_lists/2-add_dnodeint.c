#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: intiger data to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
