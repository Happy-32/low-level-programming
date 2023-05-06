#include "lists.h"

/**
 *listint_len - A function that returns the number of
 * elements in a linked list.
 * @h: A pointer to the listint_t list head
 *
 * Return: THe number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
