#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - a function that crates an array of chars,
 * and initialiez it with a specific char.
 * @c: character to initialized the array
 * @size: size input
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
