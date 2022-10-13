#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: an input string
 * Return: An encode string
 */
char *leet(char *s)
{
	int i, n;
	int search[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int rep[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (s[i] == search[n])
			{
				s[i] = rep[n / 2];
				n = 9;
			}
		}
	}

	return (s);
}
