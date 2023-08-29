#include "lists.h"

/**
  * free_listint - FREES LINKED LIST
  * @head: listint_t to be FREE
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
