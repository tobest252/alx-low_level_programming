#include "main.h"

/**
 * _strpbrk-searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: matching string
 * Return: a pointer to the first matched byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *ptr;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
