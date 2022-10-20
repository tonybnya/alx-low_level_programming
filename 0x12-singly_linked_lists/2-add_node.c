#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of list_t list
 * @str: string data for the new node
 *
 * Return: NULL if fails, otherwise address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
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
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
