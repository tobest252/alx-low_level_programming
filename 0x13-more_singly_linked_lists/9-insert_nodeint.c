#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at given position
 * @head: pointer to pointer to head node
 * @idx: index position of new node
 * @n: integer parameter of new node
 * Return: address of new node
 * on failure, NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;
	unsigned int count, max;

	count = 0;
	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	max = listint_len(*head);
	if (idx > max)
		return (NULL);
	ptr = *head;
	while (ptr->next != NULL)
	{
		count++;
		if (count == idx)
		{
			temp->next = ptr->next;
			ptr->next = temp;
		}
		else
			ptr = ptr->next;
	}
	return (temp);
}
