#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sums all data in linked list
 * @head: pointer to first node of list
 * Return: sum of data in list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	if (head == NULL)
		return (0);
	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
