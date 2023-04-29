#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes head node of list
 * @head: double pointer to head node
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	int x;

	if (*head == NULL)
		return (0);
	ptr = *head;
	x = ptr->n;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (x);
}
