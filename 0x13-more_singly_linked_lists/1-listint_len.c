#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function to count elements in a list
 * @h: pointer to first node of list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int num;
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
		ptr = ptr->next;
	}
	return (num);
}
