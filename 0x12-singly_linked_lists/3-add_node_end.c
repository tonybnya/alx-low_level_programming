#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of list_t list
 * @str: string data for the new node
 *
 * Return: NULL if fails, otherwise address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *newnode;
	char *newstr;
	int len = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newstr = strdup(str);
	if (newstr == NULL)
	{
		free(newnode);
		return (NULL);
	}

	while (*str)
	{
		len++;
		str++;
	}

	newnode->str = newstr;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}

	return (*head);
}
