#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: 0 is the linked list is empty,
 * otherwise the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *itr;
	int n;

	if (*head == NULL)
		return (0);

	itr = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(itr);

	return (n);
}
