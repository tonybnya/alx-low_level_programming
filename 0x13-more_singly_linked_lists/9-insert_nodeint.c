#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer that points to the address of the head
 * @idx: the index where to add the new node
 * @n: integer as content of the new node
 *
 * Return: NULL if failure, otherwise the address of the new node
 * if it to add at the index idx, return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	unsigned int index;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	index = 0;
	while (index != idx - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		index++;
		temp = temp->next;
	}

	node->next = temp->next;
	temp->next = node;

	return (node);
}
