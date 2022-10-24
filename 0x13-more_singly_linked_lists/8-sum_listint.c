#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: 0 is the list is empty, otherwise the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
