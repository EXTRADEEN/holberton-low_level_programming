#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My firs strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
