#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of list
 * @h: pointer to first node of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int num;
	const listint_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	num = 0;
	while (ptr != NULL)
	{
		num++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (num);
}
