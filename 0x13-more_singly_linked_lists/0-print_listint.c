#include "lists.h"

/**
 * printlistint - prints all the elements of a listint_t list
 * @h: pointer to the first element
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
