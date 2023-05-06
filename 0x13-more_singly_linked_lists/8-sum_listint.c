#include "lists.h"

/**
 * sum_listint - Calculates the sum of the entire data in  a listint_t list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: 0 If the list is empty.
 *         Or the sum of the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
