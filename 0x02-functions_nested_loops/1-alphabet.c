#include "main.h"

/**
 * print_alphabet -point of entry
 * Return:0
 */
void print_alphabet(void)
{
	char c  = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

