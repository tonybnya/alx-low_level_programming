#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the address of the first node
 * @n: integer as content of the new node
 *
 * Return: NULL if failure, otherwise the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *itr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		itr = *head;
		while (itr->next != NULL)
		{
			itr = itr->next;
		}
		itr->next = new;
	}

	return (*head);
}
