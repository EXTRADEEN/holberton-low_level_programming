#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int h;
	char lowc;

	for (h = '0'; h <= '9'; h++)
		putchar(h);
	for (lowc = 'a'; lowc <= 'f'; lowc++)
		putchar(lowc);
	putchar('\n');

	return (0);
}
