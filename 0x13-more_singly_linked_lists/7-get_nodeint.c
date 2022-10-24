#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: the index to search for
 *
 * Return: NULL if the node does not exist,
 * otherwise the node at the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	idx = 0;
	while (head != NULL)
	{
		if (idx == index)
		{
			node->n = head->n;
			node->next = NULL;

			return (node);
		}
		head = head->next;
		idx++;
	}

	return (NULL);
}
