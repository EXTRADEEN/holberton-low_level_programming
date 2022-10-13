#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int i, s;
	int cap = 32;
	int sep[] = {',', ';', '.', '?', '"',
		     '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (s = 0; s <= 12; s++)
		{
			if (n[i] == sep[s])
			{
				s = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
