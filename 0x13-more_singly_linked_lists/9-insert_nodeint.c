#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer that points to the address of the head
 * @idx: the index where to add the new node
 * @n: integer as content of the new node
 *
 * Return: NULL if failure, otherwise the address of the new node
 * NULL, if it is not possible to add at the index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *node, *tmp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = tmp;
		*head = node;
		return (node);
	}

	for (index = 0; index < idx - 1; index++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	node->next = tmp->next;
	tmp->next = node;

	return (node);
}
