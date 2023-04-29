#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function to add a new node at beginning of list
 * @head: pointer to pointer to first node of list
 * @n: integer parameter of list
 * Return: pointer to first node of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
