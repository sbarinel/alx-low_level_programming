#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints ALL elements of linked lisk
  * @h: POINTER to the list_t to print
  *
  * Return : NUMBER of printed NODES
  */

size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
if (!h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
s++;
}

return (s);
}
