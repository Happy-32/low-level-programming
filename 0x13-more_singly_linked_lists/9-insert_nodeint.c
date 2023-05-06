#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a
 * listint_t list at any given position.
 * @head: A pointer to the address of the head of the listint_t list.
 * @idx: The index of the listint_t list where the
 * new node should be added - indexing starts at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL If the function fails.
 *         Or the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *dupe = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = dupe;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (dupe == NULL || dupe->next == NULL)
		{
			return (NULL);
		}

		dupe = dupe->next;
	}

	new->next = dupe->next;
	dupe->next = new;

	return (new);
}
