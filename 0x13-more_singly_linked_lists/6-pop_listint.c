#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t list
 * @head: points to the listint_t list head address
 * Return: 0 - the linked list is empty
 *  OR the data in the head node
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int new;

	if (*head == NULL)
	{
		return (0);
	}

	ptr = *head;
	new = (*head)->n;
	*head = (*head)->next;

	free(ptr);

	return (new);
}
