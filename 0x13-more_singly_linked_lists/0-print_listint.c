#include "lists.h"

/**
  * print_listint - Prints ALL elements of LINKED LIST
  * @h: LINKED LIST of type listint_t to PRINT
  *
  * Return: Number of NODES
  */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
