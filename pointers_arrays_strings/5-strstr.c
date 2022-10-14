#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *o = haystack;
		char *t = needle;

		while (*o == *t && *t != '\0')
		{
			o++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (NULL);
}
