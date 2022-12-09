#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: points to the front of the doubly linked list
 * @n: the integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *h;
	
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	
	node->n = n;
	node->prev = NULL;
	h = *head;
	
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	
	node->next = h;
	
	if (h != NULL)
		h->prev = node;
	
	*head = node;
	
	return (node);
}
