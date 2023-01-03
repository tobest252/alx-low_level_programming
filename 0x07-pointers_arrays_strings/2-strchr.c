#include <stddef.h>
#include "main.h"

/**
 * _strchr-locates a character in a string
 * @s: string
 * @c: character to be located in string
 * Return: a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
			}
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
