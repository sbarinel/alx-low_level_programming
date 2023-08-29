#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints ALL elements of a linked lisk
  * @h: POINTER to the list_t to print
  *
  * Description: Function prints All elements of linked list of
  * list_t structures.
  *
  * Return: the number of nodes s
  */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
