#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list_t list
 * @h: the given linked list_t list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
        size_t count;

        count = 0;
        while (h)
        {
                count++;
                h = h->next;
        }

        return (count);
}
