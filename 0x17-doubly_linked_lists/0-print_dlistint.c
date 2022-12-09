#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: points to the front of the dlistint_t list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;
	const dlistint_t *temp;

	nodes = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
