#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the node in the list
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t size_of_list = 0;

	while (node)
	{
		size_of_list++;
		node = node->next;
	}

	return (size_of_list);
}
