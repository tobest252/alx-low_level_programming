#include "main.h"
/**
 * print_alphabet - lower case
 *
 * Return 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
