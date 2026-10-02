#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: address of the pointer to the head of the list
 * @index: index of the node to delete, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *to_del;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		to_del = *head;
		*head = to_del->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(to_del);
		return (1);
	}

	/* walk the cursor to the node to delete */
	for (i = 0; i < index; i++)
	{
		if ((*head)->next == NULL)
		{
			while ((*head)->prev != NULL)
				*head = (*head)->prev;
			return (-1);
		}
		*head = (*head)->next;
	}
	to_del = *head;

	/* unlink it from both neighbours before it is freed */
	(*head)->prev->next = (*head)->next;
	if ((*head)->next != NULL)
		(*head)->next->prev = (*head)->prev;

	/* the cursor walked off the head, so rewind it before freeing */
	*head = to_del->prev;
	while ((*head)->prev != NULL)
		*head = (*head)->prev;

	free(to_del);
	return (1);
}
