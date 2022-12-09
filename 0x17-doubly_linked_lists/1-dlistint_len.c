#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: points to the front of the dlistint_t list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;
	const dlistint_t *temp;

	nodes = 0;
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
