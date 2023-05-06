#include "lists.h"
/**
 *  free_listint - Frees the listint_t list
 * @head: Pointer to the listint_t list head that is to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
