#include "main.h"

/**
 * _memset-function that fills mory with constant byte
 * @s: pointer to a string/array of characters
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: poinyer to a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
