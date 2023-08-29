#include "lists.h"

/**
  * add_nodeint - ADDS new NODE at the start of linked list
  * @head: pointer to the start in the list
  * @n: Data to insert in that new node
  *
  * Return: Pointer to new node, or NULL if it fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
