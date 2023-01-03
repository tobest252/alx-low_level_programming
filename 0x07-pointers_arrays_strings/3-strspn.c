#include "main.h"

/**
 *  _strspn-gets the length of a prefix substring
 *  @s: The string to be searched.
 *  @accept: The prefix to be measured.
 *  Return: The number of bytes in s which
 *  consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int status;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		status = 1;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				status = 0;
				break;
			}
			j++;
		}
		if (status == 1)
		{
			break;
		}
		i++;
	}
	return (i);
}
