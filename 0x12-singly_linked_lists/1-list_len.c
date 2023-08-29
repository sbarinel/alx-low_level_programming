#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns number of elements in linked list
 * @h: pointer to list_t list
 *
 * Description: Returns number of the elements in a linked list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
