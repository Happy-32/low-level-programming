#include "lists.h"
/**
 * free_listint2 - FRee a listint_t list
 * @head: points to the listint_t list address
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	head = NULL;
}
