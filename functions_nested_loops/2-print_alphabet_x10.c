#include "main.h"

/**
 * print_alphabet_x10 - dispays aplhabet 10 times
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int al, lo;

	lo = 0;

	while (lo < 10)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		lo++;
		_putchar('\n');
	}
}
