#include "main.h"

/**
 *  set_string-sets the value of a pointer to a char
 *  @s: pointer to a pointer
 *  @to: pointer to a string
 *  Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
