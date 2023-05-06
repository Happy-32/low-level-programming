#include "lists.h"

/**
 * print_listint - function to print all the
 * elements in  a linked list.
 * @h: a pointer to the list_t list head
 *
 * Return: the number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
