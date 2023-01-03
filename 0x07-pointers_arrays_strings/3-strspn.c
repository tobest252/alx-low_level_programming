nclude "main.h"

/**
 *  _strspn-gets the length of a prefix substring
 *  @s: string to be searched
 *  @accept: matching string
 *  Return: an unsigned integer indicating the length of matched string
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
