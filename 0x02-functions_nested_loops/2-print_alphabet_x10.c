#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */
void print_alphabet_x10(void)
{
	char d;
	int i = 0;

	while (i < 10)
	{
		d = 'a';
		while (d <= 'z')
		{
			_putchar(d);
			d++;
		}
		_putchar('\n');
		i++;
	}
}

