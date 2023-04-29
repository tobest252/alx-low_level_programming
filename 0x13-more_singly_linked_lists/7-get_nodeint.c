#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - finds nth node of list
 * @head: pointer to first node
 * @index: node index required
 * Return: node
 * on failure, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	ptr = head;
	for (count = 0; count < index; count++)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}
