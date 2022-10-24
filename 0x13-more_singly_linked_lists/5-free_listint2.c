#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *itr;

	if (head == NULL)
		return;

	while (*head)
	{
		itr = (*head)->next;
		free(*head);
		*head = itr;
	}

	head = NULL;
}
