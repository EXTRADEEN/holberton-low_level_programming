#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit of a number
 * @ls: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int ld)
{
	int numb;

	numb = (ld % 10);

	if (ld < 0)
	{
		ld = (-1 * numb);
	}

	_putchar(numb + '0');
	return (numb);
}
