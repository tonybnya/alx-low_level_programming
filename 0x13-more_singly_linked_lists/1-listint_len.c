#include "lists.h"

/**
 * listint_len - counts the number of elements in a listint_t
 * @h: pointer to the first element
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while(h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
