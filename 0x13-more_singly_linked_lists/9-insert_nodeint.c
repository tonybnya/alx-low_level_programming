#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer that points to the address of the head
 * @idx: the index where to add the new node
 * @n: integer as content of the new node
 *
 * Return: NULL if failure, otherwise the address of the new node
 * 	   NULL, if it is not possible to add at the index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *node, *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	for (index = 0; index < (idx - 1); index++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	node->next = temp->next;
	temp->next = node;

	return (node);
}
