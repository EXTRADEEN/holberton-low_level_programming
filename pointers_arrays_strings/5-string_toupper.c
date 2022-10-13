#include "main.h"

/**
 * string_troupper - s function that changes all lowercase letters
 * of a string to uppercase
 * @s: an input string
 * Return: capitialized string
 */
char *string_toupper(char *s)
{
	int u;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] >= 'a' && s[u] <= 'z')
			s[u] = s[u] - 32;
	}
	return (s);
}
