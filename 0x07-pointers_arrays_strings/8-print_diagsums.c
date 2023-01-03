#include <stdio.h>
#include "main.h"

/**
 * print_diagsums-prints the sum of the two diagonals
 * @a: square matrix array
 * @size: array size
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	i = size;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
	}
	printf("%d, ", sum1);
	for (i = 1; i <= size; i++)
	{
		sum2 += *(a + (i * size - i));
	}
	printf("%d\n", sum2);
}
