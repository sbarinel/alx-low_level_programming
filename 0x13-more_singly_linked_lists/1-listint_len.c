#include "lists.h"

/**
  * listint_len - Returns number of elements in LINKED LISTS
  * @h: LINKED LIST of type listint_t to traverse
  *
  * Return: NUMBER OF NODES
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
