#include "lists.h"
/**
 * add_nodeint_end - Function to add a
 * new node to the end of the  listint_t list
 * @head: pointer to the listint_t head address
 * @n: some content for the newly created node
 * Return: NULL  If the function fails.
 *   Or - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (*head);
}
