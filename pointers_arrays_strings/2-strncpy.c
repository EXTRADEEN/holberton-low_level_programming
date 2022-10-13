#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @src: copy from
 * @dest: paste to
 * @n: an input integer
 * Return: result of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
